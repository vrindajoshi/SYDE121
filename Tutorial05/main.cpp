#include <iostream>
using namespace std;
#include <cmath>

int main() {

    // variables
    double n = 0.00;
    double currentPi = 4.00;
    double originalPi, epsilonValue;

    // take in user input for epsilon
    cout << "Enter a value for Epsilon: ";
    cin >> epsilonValue;


    while ( abs(originalPi - currentPi) >= epsilonValue ) {
        n++;
        originalPi = currentPi;
        double difference = (4*(pow(-1, n)))/ (2*n+1);
        cout << difference << endl;
        currentPi = originalPi + difference;
        cout << currentPi << endl;
    }

    cout << "Pi = " << currentPi << endl;
}