#include<iostream>
using namespace std;

int consecutiveOne(int n){
    //base case
    if(n==0)
    return 1;
    
    if(n==1){
        return 2;
    }
    
    if(n==2){
        return 3;
    }
    
    return consecutiveOne(n-1) + consecutiveOne(n-2);
}

int main(){
    cout<<consecutiveOne(3);
}
