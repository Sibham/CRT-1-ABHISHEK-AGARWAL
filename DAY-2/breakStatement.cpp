#include <iostream>
using namespace std;
int main() {
    int n;
    int sum = 0;

    while(true){
        cin>>n;
        
        if(n<0){
            break;
        }
        sum = sum + n;
    }
    cout<<sum;
	return 0;
}
