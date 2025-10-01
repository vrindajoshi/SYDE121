//*********************************************
// Student Name: Vrinda Joshi
// Student Number: 21181781
//
// SYDE121 Lab: 02 Task: 02
//
// Filename: lab0202.cpp
// Date submitted: 09/23/2025
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.

#include <iostream>
using namespace std;

int main() {

    // set up constants
    const double jrPencils = 8;
    const double jrPens = 7;
    const double jrCF = 60;

    const double adPencils = 2;
    const double adPens = 6;
    const double adCF = 40;

    const double srPencils = 5;
    const double srPens = 3;
    const double srCF = 12;

    // read in user data

    // -> set up variables
    double numEmployees;
    double jrPercentage;
    double srPercentage;

    // -> prompts
    cout << "Enter number of employees: ";
    cin >> numEmployees;
    cout << numEmployees << " employees entered." << endl;

    cout << "Enter percentage of junior employees (ex. 90.0% -> Input 90.0): ";
    cin >> jrPercentage;
    cout << jrPercentage << "% of employees are junior entered." << endl;

    cout << "Enter percentage of senior employees (ex. 90.0% -> Input 90.0): ";
    cin >> srPercentage;
    cout << srPercentage << "% of employees are senior entered." << endl;


    // perform calculations

    // -> set up variables

    // -> calculations
    double numJrEng = numEmployees * jrPercentage/100;
    double numSrEng = numEmployees * srPercentage/100;
    double numAdmin = numEmployees - numSrEng - numJrEng;
    cout << numJrEng << numSrEng << numAdmin<< endl;

    double numPencils = (numJrEng*jrPencils+numSrEng*srPencils+numAdmin*adPencils)/25;
    cout << numPencils << endl;
    double numPens = (numJrEng*jrPens+numSrEng*srPens+numAdmin*adPens)/10;
    double numCF = (numJrEng*jrCF+numSrEng*srCF+numAdmin*adCF)/200;


    cout << numPencils << " boxes of pencils needed, " << numPens << " boxes of pens needed, and " << numCF << " bottles of correction fluid needed." << endl;
    return 0;
}