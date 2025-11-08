#include <iostream>
#include "multiply.h"
#include "divide.h"
#define HELLO "WORLD"

using namespace std;

int main() {

    float a = 1.00, b = 6.05;

    cout << multiply(a,b) << endl;
    cout << divide(a,b) << endl;

    return 0;
}