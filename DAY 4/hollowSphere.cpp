#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    
    //no. of rows
  for( int i = 1 ; i<=n ; i++){
      //no. of spaces
      for(int j = 1 ; j<= n; j++)
      {
         if(i==1 || j ==1 || i == n || j ==n)
         cout<<"*";
         else{
             cout<<" ";
         }
      }
      cout<<"\n";
  }
    return 0;
}
