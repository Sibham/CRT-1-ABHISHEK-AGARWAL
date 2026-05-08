

#include<iostream>
using namespace std;

class A{
public:
    void print(){
        cout<<"BJP wons";
    }
};

class B : virtual public A{

};

class C : virtual public A{

};

class D : public B ,public C{
    
};

int main()
{
    D obj1;
    obj1.print();

	return 0;
}
