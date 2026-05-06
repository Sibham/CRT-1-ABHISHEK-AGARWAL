#include<iostream>
using namespace std;

class Students{
public:
string name;
int age;

void introduce(){
    cout<<"Hi there,this person name is "<<name << " and his age is "<<age<<"\n";
    }

};

int main(){
    Students s1,s2;
    s1.name ="Abhishek";
    s1.age = 24;
    s2.name ="Sibhan";
    s2.age = 21;
    s1.introduce();
    s2.introduce();
}
