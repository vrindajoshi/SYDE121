#include <iostream>
#include "rational.h"
using namespace std;

Rational::Rational(const int num, const int den) {
    numerator = num;
    denominator =  den;

    if (den == 0) {
        cout << "Error: Denominator cannot be zero. Setting to 1.\n";
        denominator = 1;
    }

    reduction();
}

Rational Rational::addition(const Rational &r) {

    Rational result;

    result.numerator = numerator * r.denominator + r.numerator * denominator;
    result.denominator = denominator * r.denominator;
    result.reduction();
    return result;
}

Rational Rational::subtraction(const Rational &r) {

    Rational result;
    result.numerator = numerator * r.denominator - r.numerator * denominator;
    result.denominator = denominator * r.denominator;
    result.reduction();
    return result;

}

Rational Rational::multiplication(const Rational &r) {

    Rational result(numerator * r.numerator, denominator * r.denominator);
    result.reduction();
    return result;

}

Rational Rational::division(const Rational &r) {

    if (r.numerator == 0) {
        cout << "Error: Division by zero rational number.\n";
        return Rational(0, 1);
    }
    Rational result(numerator * r.denominator, denominator * r.numerator);
    result.reduction();
    return result;

}

void Rational::printRational(void) {

    reduction();

    if (denominator < 0)
    {
        numerator = -numerator;
        denominator = -denominator;
    }

    cout << "Rational Value: ";
    cout << numerator << '/' << denominator;

}

void Rational::printRationalAsFloating(void) {

    cout << "Rational Value: ";
    cout << double( numerator ) / denominator;

}

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void Rational::reduction() {

    int g = gcd(numerator, denominator);
    numerator /= g;
    denominator /= g;

}
