

#include<iostream>
using namespace std;

class parent1 {
public:
	void giveMeMoney() {
		cout<<"Mummy paise Do mhuje"<<"\n";
	}
};

class parent2 {
public:
	void giveMeMoney() {
		cout<<"papa paise Do mhuje";
	}

};

class child : public parent1, public parent2 {

};


int main()
{
	child obj1;
	//obj1.giveMeMoney(); -> Ambiguity
	obj1.parent1::giveMeMoney();
    obj1.parent2::giveMeMoney();
    
	return 0;
}
