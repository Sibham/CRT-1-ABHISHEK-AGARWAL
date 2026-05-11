// solution 1
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};

//solution 2
class Solution {
public:

    void rotateArray(vector<int>& nums, int start, int end) {
        while(start < end) {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        rotateArray(nums, 0, n - 1); // rotating complete array
        rotateArray(nums, 0, k - 1); // rotating first k elements
        rotateArray(nums, k, n - 1); // rotating rest of the array
    }
};
