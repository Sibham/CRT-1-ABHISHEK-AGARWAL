//DEFAULT ARGUMENTS

#include<iostream>
using namespace std;

int area(int a , int b = 2){
    return a * b;
}

int main(){
   cout<<area(10);
   cout<<"\n";
   cout<<area(10,4);
}
