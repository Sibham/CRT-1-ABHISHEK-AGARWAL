// Water Jar Filter(while)

#include <iostream>
using namespace std;

int main()
{
    int currentWater = 0;
    int add;
    
    
 while(currentWater < 500)
 {
     cout<<"Glass has"<<currentWater <<"ml and how much?";
     cin>>add;
     currentWater= currentWater + add;
 }
 
  cout<<"Glass is full with water"<<currentWater<<"ml";
  
}

