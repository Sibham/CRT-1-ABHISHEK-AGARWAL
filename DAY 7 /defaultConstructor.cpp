
//2.1 = DEFAULT CONSTRUCTOR
#include <iostream>
using namespace std;

class wifiConnection{
public:
     string networkName;
     string password;
     
     //CONSTRUCTOR
     wifiConnection(){
         networkName = "ActFibre";
         password = " JAI SHREE RAM";
         
     }
     
public:
void showDetails(){
    cout<<"Network name is "<< networkName <<"  and its password is "<<password;
}
};

int main(){
    wifiConnection obj1;
    obj1.showDetails();
}




