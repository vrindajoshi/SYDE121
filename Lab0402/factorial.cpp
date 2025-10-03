#include <iostream>
using namespace std;

int main() {

    unsigned int factorial = 1;
    int number;


    // take in values
    cout << "Enter a positive integer: " << endl;
    cin >> number;

    // validate data (data > -1)
    // check if data is an int (data % 1 == 0)
    if (number < 0 || number % 1 != 0) {
        return 1;
    }

    for (int i = 1; i < number+1; i++) {
        factorial *= i;
    }

    // print factorial
    cout << "The factorial of " << number << " is " << factorial << "." << endl;
    return 0;

}