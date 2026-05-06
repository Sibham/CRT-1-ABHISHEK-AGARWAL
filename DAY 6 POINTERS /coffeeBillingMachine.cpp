//coffee Billing Machine


#include<iostream>
using namespace std;

int coffee(int a , int b = 30){
    return a * b;
}

int main(){
    
    int n;
    cin>>n;
    
    
    
    int ans =coffee(n);
    cout<<"the Price of Coffee of " <<n << " is " <<ans;
