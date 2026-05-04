
  
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
  for( int i = 1 ; i<=n ; i++){
      for(int j = i ; j<= n-1; j++)
      cout<<" ";
      {
          for(int k = 1;k<= i ;k++)
          
          cout<<"*";
      }
      cout<<"\n";
  }
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //no. of rows
  for( int i = 1 ; i<=n ; i++){
      //no. of spaces
      for(int j = n -i  ; j>= 1; j--)
      cout<<" ";
      {
          //no. of staring rows
          for(int k = 1 ;k<= i ;k++)
          
          cout<<"*";
      }
      cout<<"\n";
  }
    return 0;
}
