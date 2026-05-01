//PROBLEM 7 - Smart Home lighting system


#include <iostream>
using namespace std;
int main() {
    string dayOrNight;
    bool motionDectected;
    
    cout<<"is it Day Or Night? :";
    cin>>dayOrNight;
    cout<<"Is Motion Detected? [1 for Yes , 0 For Night :]";
    cin>>motionDectected;
    
    if(dayOrNight == "Night" ||dayOrNight == "night"){
        if(motionDectected){
            cout<<"TURN ON THE LED LIGHT WITH 100% BRIGHTNESS";
        }else{
            cout<<"TURN ON THE LED LIGHT WITH 10% brightness ";
        }
    }
    else{
        cout<<"TURN OFF THE LIGHTS..";
        
    }
    
	return 0;
}
