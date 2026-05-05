//Overloading

#include<iostream>
using namespace std;

int add(int a , int b){
    return a + b;
}
int add(int a , int b ,int c){
    return a + b + c;
}
int add(int a , int b , int c , int d){
    return a + b + c + d;
}
double add(double a , double b){
    return a+b;
}

 

int main(){
    cout<<add(5,2)<<"\n";
    cout<<add(5,2,4)<<"\n";
    cout<<add(5,2,4,5)<<"\n";
    cout<<add(5.5,2.0)<<"\n";
    
    return 0;
}
