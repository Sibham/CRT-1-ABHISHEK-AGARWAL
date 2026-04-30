#include <iostream>
using namespace std;


int main() {
    int a , b; 
    
    cin>>a>>b;
    //Swapping Logic
    int temp = a;
    a  = b;
    b = temp;
    
   cout<<a<<"\n" <<b <<endl;
   return 0;
}
