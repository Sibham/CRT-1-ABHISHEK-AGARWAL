// fibonacci

#include <iostream>
using namespace std;

int main()
{
  int value;
  cout<<"Enter A Value :";
  cin>>value;
  int c;
  
  int a = 0;
  int b = 1;
  
  for(int i=0; i<value; i++){
     cout<<a<<" ";
     c = a + b;
     a = b;
     b = c;
  }
  return 0;
}

