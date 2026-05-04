#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cin>>row>>col;
    
    //no. of rows
  for( int i = 1 ; i<=row ; i++){
      //no. of col
      for(int j = 1 ; j<= col; j++)
      {
          cout<<"*";
      }
      cout<<"\n";
  }
    return 0;
}
