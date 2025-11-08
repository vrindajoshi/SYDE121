#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>


int main() {

    // variables
    double n = 0.00;
    double count = 0;
    double currentPi = 4.0;
    double originalPi, epsilonValue;

    // take in user input for epsilon
    cout << "Enter a value for Epsilon between 0.0 and 0.1: ";
    cin >> epsilonValue;
    while (epsilonValue < 0.0 || epsilonValue > 0.1) {
        cout << "Enter a value for Epsilon between 0.0 and 0.1: ";
        cin >> epsilonValue;
    }

    while ( abs(originalPi - currentPi) >= epsilonValue ) {
        cout <<fixed << setprecision(0) << count << "\t\t" << fixed << setprecision(12) << setw(13) << currentPi << '\n';
        n++;
        count++;
        originalPi = currentPi;
        double difference = (4*(pow(-1, n)))/ (2*n+1);
        currentPi = originalPi + difference;
    }

    cout <<fixed << setprecision(0) << count << "\t\t" << fixed << setprecision(12) << setw(13) << currentPi << '\n';
}