//Practice Problem
//SMART AC REMOTE //FUCNTION OVERLOADING // DEFAULT ARGUMENTS

#include<iostream>
using namespace std;

void setTemperature(int temp = 22){
    cout<<"temperatue set to " <<temp<<" C"<<"\n";
}

void setTemperature(double temp){
    cout<<"temperatue set to " <<temp<<" C"<<"\n";
}

void setTemperature(string mode){
    if(mode == "ECO"){
        cout<<"temperatue set to 24 C"<<"\n";
    }
    else if(mode == "TURBO"){
        cout<<"temperatue set to 18 C"<<"\n";
    }
}

int main(){
    setTemperature(); //default value -- 22
    
    setTemperature(20.5); //manually setting the setTemperature
    
    setTemperature("ECO"); // set temperature to 24
    
    setTemperature("TURBO"); //set temperature to 18
}
