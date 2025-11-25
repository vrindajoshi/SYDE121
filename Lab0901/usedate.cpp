#include "date.h"

int main() {

  cout << "About to do a library due date computation ... " << endl;
  cout << "Please enter all dates in this format: year month day\n"
       << "(three numbers separated by spaces)." << endl;

  int yr = 0; // temporary storage for input from user
  int mo = 0;
  int day = 0;

  cout << "\nOn what date was the book checked out? ";
  cin >> yr >> mo >> day;
  Date check_out(yr, mo, day);
  cout << "The book was checked out on ";
  check_out.print();
  cout << endl;

  int loan_period;
  cout << "What is the loan period, in days? ";
  cin >> loan_period;
  cout << "The loan period is " << loan_period << " days." << endl;

  Date due_date;
  due_date = check_out;
  for (int count = 1; count <= loan_period; count++)
    due_date.advance();
  cout << "The due date is ";
  due_date.print();
  cout << endl;

  cout << "What is the date today? ";
  cin >> yr >> mo >> day;
  Date today(yr, mo, day);
  cout << "Today is ";
  today.print();
  cout << endl;
  if (today.is_earlier_than(due_date))
    cout << "The book is not due yet." << endl;
  else if (due_date.is_earlier_than(today))
    cout << "The book is overdue." << endl;
  else
    cout << "The book is due today." << endl;

  return 0;
}
