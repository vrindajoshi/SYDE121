
#ifndef RATIONALEXPANDED_H
#define RATIONALEXPANDED_H

#include <iostream>
using namespace std;

class RationalExpanded
{
public:
   RationalExpanded( const int num = 0, const int den = 1 );
   
   friend ostream & operator<<( ostream &out, const RationalExpanded & );
   friend istream & operator>>( istream &in, RationalExpanded & );

   RationalExpanded operator+( const RationalExpanded& ) const;
   RationalExpanded operator-( const RationalExpanded& ) const;
   RationalExpanded operator*( const RationalExpanded& ) const;
   RationalExpanded operator/( RationalExpanded& ) const;
   bool operator>( const RationalExpanded& ) const;
   bool operator<( const RationalExpanded& ) const;
   bool operator>=( const RationalExpanded& ) const;
   bool operator<=( const RationalExpanded& ) const;
   bool operator==( const RationalExpanded& ) const;
   bool operator!=( const RationalExpanded& ) const;

private:
   int numerator;
   int denominator;
   void reduction( );
};

#endif
