#include "undergrad.h"
#include <iostream>
#include <chrono>
using namespace std;

// default constructor
Undergrad::Undergrad() : status(UNDECIDED), term('A')
{
    Undergrad::enter_grades();
}

// constructor with year and term
Undergrad::Undergrad(const int newyear, char newterm)
    : year(newyear), term(newterm), status(UNDECIDED)
{
    Undergrad::enter_grades();
    Undergrad::set_status(grades);
}

// constructor with name, id, gradyear
Undergrad::Undergrad(const string &name, const int id, const int gradyear,
    int newyear, char newterm)
    : Student(name, id, gradyear), year(newyear), term(newterm), status(UNDECIDED)
{
    Undergrad::enter_grades();
    Undergrad::set_status(grades);
}

// constructor with full Student + Undergrad details
Undergrad::Undergrad(const string &newname, const int newid, const int newgradyear,
    int newyear, char newterm, const int day, const int month, const int birthYear)
    : Student(newname, newid, newgradyear, day, month, birthYear), year(newyear), term(newterm), status(UNDECIDED)
{
    Undergrad::enter_grades();
    Undergrad::set_status(grades);
}

void Undergrad::enter_grades()
{
    cout << "Enter " << NUM_COURSES << " grades: ";
    for (int i = 0; i < NUM_COURSES; i++)
        cin >> grades[i];
}

void Undergrad::print_grades() const {
    cout << "Grades are: ";
    for (int i = 0; i < NUM_COURSES; i++)
        cout << grades[i];
}

void Undergrad::print()
{
    cout << "*** Student Information ***";
    cout << "Name: " << Student::get_name() << " " << "ID: " << Student::get_id() << "\t" << "Date of birth: " << Student::get_dateofbirth() << endl;
    cout << "Grad year: " << Student::get_gradyear() << endl;
    cout << "Grades are:";
    for (int i = 0; i < NUM_COURSES; i++)
    {
        cout << " " << grades[i];
    }

    if (Undergrad::get_status() == UNDECIDED)
    {
        cout << "Student status undecided.";
    } else if (Undergrad::get_status() == PASS)
    {
        cout << "Student passed";
    } else
    {
        cout << "Student failed";
    }
}

Status Undergrad::get_status() const
{
    double average = 0;
    for (int i = 0; i < NUM_COURSES; i++) average += static_cast<double>(grades[i]);

    average /= NUM_COURSES;

    if (average > PASSMARK)
    {
        return PASS;
    } else return FAIL;
}

int Undergrad::get_year() const
{
    return year;
}

void Undergrad::set_year(int newyear)
{
    year = newyear;
}

char Undergrad::get_term() const
{
    return term;
}

void Undergrad::set_term(char newterm)
{
    term = newterm;
}

int Undergrad::age_at_convocation()
{
    int birthYear = Student::get_dateofbirth().get_year();
    int gradYear = Student::get_gradyear();

    int birthMonth = Student::get_dateofbirth().get_month();
    int birthDay = Student::get_dateofbirth().get_day();

    int age = gradYear - birthYear;

    bool birthdayAfterConvocation =
    (birthMonth > 5) || (birthMonth == 5 && birthDay > 15);

    if (birthdayAfterConvocation)
        age--;

    return age;

}
