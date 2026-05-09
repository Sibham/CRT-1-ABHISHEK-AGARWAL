#include<iostream>
using namespace std;

void traversal(int arr[], int size ){
    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";   
}

int main(){
    int arr[] = {10,20,30,40,50};
    traversal(arr , 5);
    return 0;
}
