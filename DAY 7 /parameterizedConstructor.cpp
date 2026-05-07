//2.2 = parameterized CONSTRUCTOR
#include <iostream>
using namespace std;

class Students{
public:
     string name;
     int id;
     
     //CONSTRUCTOR
     Students(string studentName , int studentID){
         name = studentName;
         id = studentID;
         
     }
     
public:
void showDetails(){
    cout<<name<<" "<<id;
}
};

int main(){
    Students std1("RAM",101);
    std1.showDetails();
}
