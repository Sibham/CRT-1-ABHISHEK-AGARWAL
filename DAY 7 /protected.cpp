// //PROBLEM 2
// //ACCESS SPECIFIERS - Protected


 #include <iostream>
 using namespace std;

 class Parent{
  protected:   
     int secretCode = 1234;
 };

 class child: public Parent{
public:
    void accessOfSecretCode(){
       cout<<"SecretCode of the locker is "<<secretCode;
    }
};

int main()
{
  child obj1;
  obj1.accessOfSecretCode();


     return 0;
}



