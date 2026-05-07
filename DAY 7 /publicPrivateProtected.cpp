//PROBLEM 3
//Create a Vehicle class:
//engineNumber → private
//brand → protected
//model → public
//Child class Car should display brand and model


 #include <iostream>
 using namespace std;

 class Parent{
  protected:   
     string brand = "BMW";
 };

 class child: public Parent{
     
private:
int engineNumber = 2023234;

public:
    void car(){
        string model = "M4";
       cout<<"THE MODEL OF CAR :"<<model<<"\n"<<"THE BRAND OF CAR :" <<brand;
    }
};

int main()
{
  child obj1;
  obj1.car();


     return 0;
}
