//PROBLEM 1
//ACCESS SPECIFIERS
//Showing Bank Balance


#include <iostream>
using namespace std;

class bandAccount{
    
private:
int balance = 5000;

public:
void showBalance(){
    cout<<"Balance in your account : "<<balance;
}
};

int main()
{
    bandAccount myaccount;
    myaccount.showBalance();


    return 0;
}
