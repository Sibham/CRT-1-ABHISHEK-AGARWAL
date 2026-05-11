//SOLUTION 1
class Solution {
public:
    void reverseString(vector<char>& s) {
        int st = 0;
    int e = s.size()-1;

    while(st<=e)
    {
        swap(s[st], s[e]);
        st++;
        e--;
    }
    }
};

//SOLUTION 2
							
class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int n = s.size();
        int st = 0;
        int e = n-1;

    while(st<=e)
    {
        char c = s[st];
        s[st] = s[e];
        s[e] = c ;

        st++;
        e--;
     }
    }
};
