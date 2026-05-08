//Inheritance
//Problem --1
//TYpes -- 1.1 SIngle inheritance

#include<iostream>
using namespace std;

class vehicle{
public:
    void start(){
        cout<<"Vehicle Starts"<<"\n";
    }
    
};

class car : public vehicle{
public:
        void drive(){
            cout<<"Car is Running"<<"\n";
        }
};
int main()
{
    car obj1;
    obj1.drive();
    obj1.start();
    
    
    return 0;
}
