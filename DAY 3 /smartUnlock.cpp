// Smart Unlock //TRY TO UNLOCK THE PHONE UNTIL WE GET THE CORRECT PASSWORD

#include <iostream>
using namespace std;

int main()
{
  int password;
  do{
      cout<<"Enter The Password :";
      cin>>password;
  }while(password != 1234);
  cout<<"Phone Unlocked";
  
  return 0;
}

