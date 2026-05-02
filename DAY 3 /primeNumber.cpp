// Prime Number

#include <iostream>
using namespace std;

int main()
{
  int value;
  cout<<"Enter A Value :";
  cin>>value;
  bool isPrime = true;
  
  if(value<2){
      isPrime = false;
  }
  else{

  for(int i = 2 ; i < value ; i++){
      if(value % i == 0){
          isPrime = false;
          break;
      }
    }
  }
  if(isPrime){
      cout<<"Prime Number";
  }
  else{
      cout<<"not Prime Number";
  }
  return 0;
}

