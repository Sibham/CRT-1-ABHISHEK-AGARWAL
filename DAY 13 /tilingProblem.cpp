#include<iostream>
using namespace std;

int solve(int n){
    //base case
   if(n<=3){
       return 1;
   }
    
    return solve(n-1) + solve(n-4);
}

int main(){
    cout<<solve(5);
}
