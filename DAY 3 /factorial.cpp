// factorial 

#include <iostream>
using namespace std;

int main()
{
  int value;
  cout<<"Enter A Value :";
  cin>>value;
  int fact = 1;
  
  for(int i=value ; i>=1; i--){
     fact = fact * i; 
  }
  cout<<fact;
  return 0;
}

