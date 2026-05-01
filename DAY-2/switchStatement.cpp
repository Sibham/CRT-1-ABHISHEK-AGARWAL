//PROBLEM 8 - Customer Support IVR system
// 1 - for Support
// 2 - for billing
// 3 - Technical Issue
// 4 - Talk to the agent

#include <iostream>
using namespace std;
int main() {
    int choice;
    cin>>choice;
    
    switch(choice){
        case 1:
        cout<<"Transferring call to the customer support";
        break;
        
        case 2:
        cout<<"Transferring call to billing and accounts";
        break; 
        
        case 3:
        cout<<"Connecting to technical help desk";
        break;
        
        case 4:
        cout<<"Connecting call to the agent";
        break;
        
        default:
        cout<<"Invalid selection,Enter Valid Number ";
        
    }
	return 0;
}
