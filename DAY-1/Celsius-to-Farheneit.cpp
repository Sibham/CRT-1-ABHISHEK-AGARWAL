#include <iostream>
using namespace std;

int main() {
    double celcius;
    double fahrenheit;

    cout << "Enter a value: ";   // prompt user
    cin >> celcius;              // take input

    fahrenheit = (celcius * 9.0 / 5.0) + 32.0;
    cout << "Answer: " << fahrenheit << endl;

    return 0;
}
