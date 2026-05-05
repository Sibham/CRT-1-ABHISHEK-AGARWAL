

#include<iostream>
using namespace std;

int main(){
    int age = 100;
    int *ptr = & age;
    
    cout<<ptr<<"\n";
    cout<<*ptr<<"\n";
    cout<<age<<"\n";
    
    *ptr = 28;
    cout<<*ptr;
    return 0;
}
