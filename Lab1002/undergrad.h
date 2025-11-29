#ifndef LAB1002_UNDERGRAD_H
#define LAB1002_UNDERGRAD_H

#include "student.h"
#include <string>
using std::string;

enum Status { PASS, FAIL, UNDECIDED };

class Undergrad : public Student
{
public:
    static const int NUM_COURSES = 5;
    static const int PASSMARK = 50;

    // constructors
    Undergrad();
    Undergrad(const int newyear, char newterm);
    Undergrad(const string &name, const int id, const int gradyear,
        int newyear, char newterm);
    Undergrad(const string &newname, const int newid, const int newgradyear, const int newyear, const char newterm,
        const int day, const int month, const int year);

    // destructor
    ~Undergrad();

    // accessors
    void print_grades() const;
    void enter_grades();

    void print();

    void determine_status();

    int get_year() const;
    void set_year(int year);

    char get_term() const;
    void set_term(char term);

    Status get_status() const;
    void set_status(int grades[NUM_COURSES]);

    int age_at_convocation();

private:
    int grades[NUM_COURSES];
    Status status;
    int year;
    char term;
};

#endif // LAB1002_UNDERGRAD_H
