
//Problem 4
//4.4 - Argument and return Type

#include <iostream>
using namespace std;

int currencyConversion(int amountInINR) {
	return amountInINR/100 ;
}
int main() {
	cout<<currencyConversion(1000);
	return 0;
}
