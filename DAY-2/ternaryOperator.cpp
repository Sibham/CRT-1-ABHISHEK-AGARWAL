#include <iostream>
using namespace std;
int main() {
    int a , b;
    int maxNumber;
    
    cin>>a>>b;
    //ternary operator
    maxNumber = (a > b) ? a : b;
    cout<<maxNumber;
    return 0;
}
