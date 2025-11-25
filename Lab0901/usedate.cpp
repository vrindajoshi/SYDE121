#include "date.h"

int main() {

  cout << "About to do a flight reservation period computation ... " << endl;
  cout << "Please enter all dates in this format: year month day\n"
  << "(three numbers separated by spaces)." << endl;
  // Prompt for and read input
  cout << "\nWhat is the date of the flight? ";
  // User types "YYYY M D"
  cout << "The date read was ";
  // Echo back the input using one of the member functions of Date class
  cout << endl;
  cout << "How many days earlier must the ticket be bought? ";

  int n;
  cin >> n;
  cout << n << " day(s) advance purchase ..." << endl; // <N> comes from cin
  cout << "You must buy the ticket on or before ";
  // Echo back date using one of the member functions of Date class
  cout << endl;

  return 0;
}
