#ifndef RATIONAL_H
#define RATIONAL_H
#include <iostream>

class Rational {
public:
  Rational(const int num = 0, const int den = 1); // default constructor
  Rational addition(const Rational &);
  Rational subtraction(const Rational &);
  Rational multiplication(const Rational &);
  Rational division(const Rational &);
  void printRational(void);
  void printRationalAsFloating(void);

private:
  int numerator;
  int denominator;
  void reduction(void); // utility function
};

#endif
