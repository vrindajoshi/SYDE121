
#include "rational_expanded.h"
#include <iostream>
using namespace std;

RationalExpanded::RationalExpanded(const int num = 0, const int den = 1)
{
    numerator = num;
    denominator = den;
}

friend ostream & operator<<( ostream &out, const RationalExpanded &r )
{
    cout << numerator << "/" << denominator << endl;
}
friend istream & operator>>( istream &in, RationalExpanded & )
{
    cin >> numerator >> denominator;
}

RationalExpanded operator+( const RationalExpanded&r ) const
{
    RationalExpanded s;
    s.numerator = numerator * r.denominator + r.numerator * denominator;
    s.denominator = denominator * r.denominator;
    s.reduction();
    return s;
}
RationalExpanded operator-( const RationalExpanded& ) const
{
    RationalExpanded s;
    s.numerator = numerator * r.denominator - r.numerator * denominator;
    s.denominator = denominator * r.denominator;
    s.reduction();
    return s;
}
RationalExpanded operator*( const RationalExpanded& ) const
{
    RationalExpanded s;
    s.numerator = numerator * r.numerator;
    s.denominator = denominator * r.denominator;
    s.reduction();
    return s;
}

RationalExpanded operator/( RationalExpanded& ) const
{
    RationalExpanded s;
    s.numerator = numerator * r.denominator;
    s.denominator = denominator * r.numerator;
    s.reduction();
    return s;
}


bool operator>( const RationalExpanded&r ) const
{
    if (numerator/denominator > r.numerator/r.denominator)
    {
        return true;
    }
    else return false;
}
bool operator<( const RationalExpanded&r ) const {
    if (numerator/denominator < r.numerator/r.denominator)
    {
        return true;
    }
    else return false;
}
bool operator>=( const RationalExpanded&r ) const {
    if (numerator/denominator >= r.numerator/r.denominator)
    {
        return true;
    }
    else return false;
}
bool operator<=( const RationalExpanded&r ) const {
    if (numerator/denominator <= r.numerator/r.denominator)
    {
        return true;
    }
    else return false;
}

bool operator==( const RationalExpanded& ) const
{
    {
        if (numerator/denominator == r.numerator/r.denominator)
        {
            return true;
        }
        else return false;
    }
}

bool operator!=( const RationalExpanded&r ) {
    if (numerator/denominator != r.numerator/r.denominator)
    {
        return true;
    }
    else return false;
}