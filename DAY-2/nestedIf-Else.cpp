#include <iostream>
using namespace std;
int main() {
    int age;
    cin>>age;
    
    if(age >= 18){
        if(age>=100){
            cout<<"ELIGIBLE FOR VOTE(But We Are Super Senior Citizen";
        }else{
        cout<<"Eligible for Vote";
        }
    
    }
    else{
        if(age <0){
            cout<<"Enter a valid Number";
        }
        else{
            cout<<"Not Eligible For vote";
        }
    }
    
    return 0;
}
