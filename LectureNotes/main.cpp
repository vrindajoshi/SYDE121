#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    // // September 19th 2025
    // int primaryVariable = 0;
    // int secondaryVariable = 1;
    //
    // // decision statement all in one singular line
    // int mainVariable = (primaryVariable < secondaryVariable) ? primaryVariable : secondaryVariable;
    // std::cout << "mainVariable = " << mainVariable << std::endl;

    // int sum = 0;
    // int number = 2;
    //
    // // for (int i = 2; i <=100; i++) {
    // //     sum +=i;
    // // }
    //
    // do {
    //     sum += number;
    // } while (number <= 100);
    //
    // cout << "Sum is " << sum << endl;
    //
    // return 0;

    // // November 11th 2025

    ifstream in_stream; // declare object

    // method 1: not covered in class
    try {
        in_stream.open("users.txt");
    } catch (int error) {
        cout << "Error opening file" << error << endl;
        exit(1);
    }

    // method 2: clausi way
    in_stream.open("file.txt");
    if (in_stream.fail()) { // in_stream.fail() returns a BOOLEAN
        cout << "Error opening file.txt" << endl;
        exit(1);
    }

    // actual code to use the in_stream object
    int one_num = 0, second_num = 0;
    in_stream >> one_num >> second_num;
    cout << one_num << " " << second_num << endl;

    // after the first two numbers are read, the in_stram object starts from the next line

    string file_string = "";

    // reading until the end of the file
    while (!in_stream.eof()) { // OBJECT_NAME.eof() refers to the end of the file, this line of code say while the input is not in the end of the file
        getline(in_stream, file_string); // each line is read by getline(readerObject, stringThatValueGetsAssignedTo)

        // the value in each line is not being ADDED to file_string, but each line replaces the previous
        cout << file_string << endl; // the SINGULAR line in outputted to the console
    }

    // alt method
    int next = 0;
    while (in_stream >> next) { // in_stream >> next returns a boolean value, is false, that refers to the eof
        cout << next << endl; // the value (if true) in outputted
    }


}