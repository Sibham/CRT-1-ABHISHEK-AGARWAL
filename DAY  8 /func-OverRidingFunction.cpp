#include<iostream>
using namespace std;

class parent {
public:
	virtual void sum(int a, int b) {
		cout<<a + b<<" parent";
	}
};

class child : public parent {
public:
	void sum(int a, int b) override {
		cout<<a + b<<" Child";
	}
};



int main() {

	child c;
	c.sum(3,4);

	return 0;
}
