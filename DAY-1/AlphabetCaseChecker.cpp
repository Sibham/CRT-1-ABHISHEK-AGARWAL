
#include <iostream>
using namespace std;

int main()
{
    char value;
    cout<<"Enter a value :";
    cin>>value;
    
    
    if(value>='a' && value<='z'){
        cout<<"Character is Small Letter";
    }
    else if(value>='A' && value<='Z'){
        cout<<"Character is Capital Letter";
    }
    else if(value>=0 && value<=9){
        cout<<"Character is Integer";
    }
    else{
        cout<<"Invalid Character";
    }
