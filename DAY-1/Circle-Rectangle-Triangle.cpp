#include <iostream>
using namespace std;


int main() {
   int choice;
   cin >> choice;
   
   if(choice==0)
   {
       double r;
       cin>>r;
       cout<<3.14*r*r<<endl;
   }
   
   else if (choice == 1)
   {
       double l,w;
       cin>>l>>w;
       cout<<l*w<<endl;
   }
   
   else if(choice == 2)
   {
       double b,h;
       cin>>b>>h;
       cout<<(b*h)/2;
   }
   else{
       cout<<"INVALID"<<endl;
   return 0;
}
