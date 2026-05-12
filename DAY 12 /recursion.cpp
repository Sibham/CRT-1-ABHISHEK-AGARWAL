
#include <iostream>
using namespace std;

void printNumber(int n){
    //base case
    if(n>5){
        return ;
    }
    cout<<n;
    printNumber(n+1);
}

int main()
{
    printNumber(1);

    return 0;
}
