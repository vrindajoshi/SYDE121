// SYDE 121 Tutorial 2 - Introduction to Programming in C++

// Imports
#include <iostream>
#include <iomanip>
using namespace std;

// Function
int main() {

    // Initial Variables
    double midterm = 0.0;
    double finalexam = 0.0;

    // Prompt to the User
    cout << "Enter Midterm and Final Exam marks: " << endl;
    // Input of Date from User
    cin >> midterm >> finalexam;

    // Output inputted information back to the user
    cout << "\nMidterm Mark of " << midterm << " and Final Mark of " << finalexam << " entered" << endl;

    // Variable to calculate average of the two inputs
    double average = (midterm + finalexam) / 2.0;
    cout << "Average of the midterm and final exam is " << average << endl;

    cout.setf(ios::fixed); // Fixed Notation
    cout.precision(2); // 2 Decimal Places

    // Return formatted average
    cout << "Average (formatted): " << average << endl;

    return 0;
}