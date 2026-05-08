//POLYMORPHISM
//POLYMORPHISM means one name but many forms
//same functions behaves differently depending on the type of the object it called

//Two Types :-
//Compile time polymorphism -- Function Overloading --Static
//resolved at compile time
//Function Overloading -- same function name , but different Parameters
//Faster Execution

//Run time Polymorphism -- Function Overriding -- Dynamic
//Resolved at run time
//Function Runtime -- Same function Name , same Parameters , but different class
//uses a virtual keyword in the base class
//achieving this through the concept of Inheristance


//Types of Polymorphism -- 2.1
//Function Overloading

#include<iostream>
using namespace std;

class Math{
public:
	void add(int a,int b){
	cout<<a + b<<"\n";
	}

public:
	void add(int a,int b , int c){
	cout<<a + b + c<<"\n";
	}

public:
	void add(double a,double b){
	cout<<a + b<<"\n";
	}
};

int main(){
    Math obj1;
    obj1.add(2,3);
    obj1.add(2,3,4);
    obj1.add(2.0,4.2);
}

