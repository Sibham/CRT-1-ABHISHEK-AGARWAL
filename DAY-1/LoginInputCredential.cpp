#include <iostream>
using namespace std;


int main() {
   const int userid= 1234;
   const int password = 0000;
   
   int inputID, inputPASSWORD;
   cout<<"Enter your ID here:";
   cin>>inputID;
   cout<<"Enter your password :";
   cin>>inputPASSWORD;
   
   bool isGranted = (userid == inputID) && (password == inputPASSWORD);
   
   cout<<"Access Granted :" <<isGranted<<endl;
   cout<<"Access Denied :"<<!isGranted<<endl;
  
   return 0;
}

