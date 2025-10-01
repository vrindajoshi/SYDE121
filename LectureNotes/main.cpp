#include <iostream>
using namespace std;

int main() {
    // // September 19th 2025
    // int primaryVariable = 0;
    // int secondaryVariable = 1;
    //
    // // decision statement all in one singular line
    // int mainVariable = (primaryVariable < secondaryVariable) ? primaryVariable : secondaryVariable;
    // std::cout << "mainVariable = " << mainVariable << std::endl;

    int sum = 0;
    int number = 2;

    // for (int i = 2; i <=100; i++) {
    //     sum +=i;
    // }

    do {
        sum += number;
    } while (number <= 100);

    cout << "Sum is " << sum << endl;

    return 0;
}