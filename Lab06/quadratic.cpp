#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// function declarations - w call-by-reference variables

// define enter data function
void enter_data(double &a, double &b, double &c);

// define quadratic function + necessary variables
void quadratic(double, double, double ,
double &first_real, double &first_imag,
double &second_real, double &second_imag);

// function to display results of the quadratic function based on whether it is imag or real
void display_results(double first_real, double first_imag,
double second_real, double second_imag);

// main function
int main() {

    double a, b, c, first_real, first_imag, second_real, second_imag;

    // call enter data function
    enter_data(a, b, c);

    // call quadratic function
    quadratic(a, b, c, first_real, first_imag, second_real, second_imag);

    // call display results function
    display_results(first_real, first_imag, second_real, second_imag);

    return 0;

}

// define enter_data function
void enter_data(double &a, double &b, double &c) {
    //a
    cout << "Enter the value for a: ";
    cin >> a;
    while (a == 0) {
        cout << "Enter the value for a: ";
        cin >> a;
    }
    cout << "  a = " << a << endl << endl;

    cout << "Enter the value for b: ";
    cin >> b;
    cout << "  b = " << b << endl << endl;

    cout << "Enter the value for c: ";
    cin >> c;
    cout << "  c = " << c << endl << endl;
}


// define quadratic function
void quadratic(double a, double b, double c, double &first_real, double &first_imag, double &second_real, double &second_imag) {

    double discriminant = b * b - 4 * a * c;
    if (discriminant >= 0) {
        first_real = (-b + sqrt(discriminant)) / (2 * a);
        second_real = (-b - sqrt(discriminant)) / (2 * a);
        first_imag = 0;
        second_imag = 0;
    } else if (discriminant < 0) {
        first_real = (-b) / (2 * a);
        second_real = (-b) / (2 * a);
        first_imag = (sqrt(-discriminant)) / (2 * a);
        second_imag = -(sqrt(-discriminant)) / (2 * a);
    }
}

// display results function
void display_results(double first_real, double first_imag, double second_real, double second_imag) {

    cout << fixed << setprecision(4) << endl;

    if (first_imag == 0) {
        // if real
        cout << "The roots of the equation are " << first_real << " and " << second_real << "." << endl << endl;
    } else {
        // if complex
        cout.setf(ios::showpos);
        cout << "The roots of the equation are " << first_real << first_imag << "j and " << second_real << second_imag << "j." << endl << endl;
    }

}

