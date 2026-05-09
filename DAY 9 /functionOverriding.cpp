#include<iostream>
using namespace std;

class Appliance {
public:
    virtual void turnOn() {
        cout << "Appliance is starting up" << "\n";
    }
    virtual void work() = 0;  // pure virtual function
};

class Fan : public Appliance {
public:
    void turnOn() override {
        cout << "Fan blades are moving slowly" << "\n";
    }
    void work() override {
        cout << "Fan is giving me cool air" << "\n";
    }
};

class Toaster : public Appliance {
public:   // <-- yaha public likhna zaroori hai
    void work() override {
        cout << "Toaster is heating up the breads" << "\n";
    }
};

int main() {
    Appliance* kitchenApp;

    Fan myfan;
    Toaster myToast;

    // Fan object
    kitchenApp = &myfan;
    kitchenApp->turnOn();
    kitchenApp->work();

    cout << "-------------------\n";

    // Toaster object
    kitchenApp = &myToast;
    kitchenApp->turnOn();   // Appliance ka default turnOn chalega
    kitchenApp->work();

    return 0;
}
