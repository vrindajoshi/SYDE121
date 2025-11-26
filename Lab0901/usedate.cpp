#include <iostream>
#include "date.h"

using namespace std;

int main() {

  cout << "About to do a flight reservation period computation ... " << endl;
  cout << "Please enter all dates in this format: year month day\n"
       << "(three numbers separated by spaces)." << endl;

  int year, month, day;
  cout << "\nWhat is the date of the flight? ";
  cin >> year >> month >> day;

  Date flight_date(year, month, day);

  cout << "The date read was ";
  flight_date.print();
  cout << endl;

  int n;
  cout << "How many days earlier must the ticket be bought? ";
  cin >> n;
  cout << n << " day(s) advance purchase ..." << endl;

  Date purchase_date = flight_date;
  for (int i = 0; i < n; ++i) {
    purchase_date.backup();
  }

  cout << "You must buy the ticket on or before ";
  purchase_date.print();
  cout << endl;

  return 0;
}
