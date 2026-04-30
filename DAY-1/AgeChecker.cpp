#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter Your Age :";
    cin>>age;
    
    
    if(age>=0 && age<=16){
        cout<<"You are Child"<<age;
    }
    else if(age>=17 && age<=30){
        cout<<"You are Young Adults";
    }
    else if(age>=31 && age<=45){
        cout<<"You are Middle Aged Adults";
    }
    else{
        cout<<"Adult";
    }

    return 0;

}
