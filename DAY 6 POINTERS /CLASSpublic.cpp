//ACCESS MODIFIER
//PUBLIC

#include<iostream>
using namespace std;

class PublicPark{
public:
void enter(){
    cout<<"Anyone can Enter in the Park";
}
};


int main(){
    PublicPark p;
    p.enter();
    
}
