#include<iostream>
#include<stack>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50};
    int n = 5;
    
    stack<int>st;
    
    //push the data into stack
    for(int i = 0; i<n;i++){
        st.push(arr[i]);
    }
    
    // pop the data from the stack and put into the array back
    for(int i = 0; i<n;i++){
        arr[i] = st.top();
        st.pop();
    }
    
    cout<<"Reverse Array :"<<"\n";
    
    for( int  i = 0 ; i<n ; i++)
    cout<<arr[i]<<" ";
    return 0;
}
