
#include<iostream>
using namespace std;

int linearSearch(int arr[], int size , int k ){
    for(int i = 0 ; i < size ; i++){
       if(arr[i]==k){
           return i;
       }
    }
    return -1;   
}

int main(){
    int arr[] = {10,20,30,40,50};
    int ans = linearSearch(arr , 5 , 40);
    cout<<ans;
    return 0;
}
