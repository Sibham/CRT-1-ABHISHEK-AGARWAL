
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
        void drift(){
            cout<<"Car is Running"<<"\n";
        }
};

class bike : public vehicle{
public:
    void run(){
        cout<<"Bike is Running"<<"\n";
    }
};

int main()
{
    car obj1;
    obj1.drift();
    obj1.start();
    
    bike obj2;
    obj2.run();
    obj2.start();
    
    
    return 0;
}
