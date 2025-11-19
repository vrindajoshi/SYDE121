#include <iostream>

using namespace std;

//void write(ofstream &out, string file);

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

    // // // November 11th 2025
    //
    //ifstream in_stream; // declare object
    //
    // // method 1: not covered in class
    // try {
    //     in_stream.open("users.txt");
    // } catch (int error) {
    //     cout << "Error opening file" << error << endl;
    //     exit(1);
    // }
    //
    // // method 2: clausi way
    // in_stream.open("file.txt");
    // if (in_stream.fail()) { // in_stream.fail() returns a BOOLEAN
    //     cout << "Error opening file.txt" << endl;
    //     exit(1);
    // }
    //
    // // actual code to use the in_stream object
    // int one_num = 0, second_num = 0;
    // in_stream >> one_num >> second_num;
    // cout << one_num << " " << second_num << endl;
    //
    // // after the first two numbers are read, the in_stram object starts from the next line
    //
    // string file_string = "";
    //
    // // reading until the end of the file
    // while (!in_stream.eof()) { // OBJECT_NAME.eof() refers to the end of the file, this line of code say while the input is not in the end of the file
    //     getline(in_stream, file_string); // each line is read by getline(readerObject, stringThatValueGetsAssignedTo)
    //
    //     // the value in each line is not being ADDED to file_string, but each line replaces the previous
    //     cout << file_string << endl; // the SINGULAR line in outputted to the console
    // }
    //
    // // alt method
    // int next = 0;
    // while (in_stream >> next) { // in_stream >> next returns a boolean value, is false, that refers to the eof
    //     cout << next << endl; // the value (if true) in outputted
    // }

//     ofstream out_stream;
//     write(out_stream, "file.txt");
//
// }
//
// void write(ofstream &out, string file) {
//
//     // November 12th 2025
//     int x_int = 1, y_int = 2, z_int = 3;
//     out.open(file);
//
//     // unlikely to happen, but important to cover all the bases
//     if (out.fail()) {
//         cout << "Error opening file" << endl;
//         exit(1);
//     }
//
//     // set precision of output using .setf, .precision, etc.
//     out << "x = " << x_int << ", y = " << y_int << endl; // the out_stream doesn't add to the pre-existing file, rather OVERwrites any pre-exisiting data
//
//     out.close();
//
//     out.open(file, ios::app); // ios::app makes the file APPEND data to a pre-exisiting file
//     if (out.fail()) {
//         cout << "Error opening file" << endl;
//         exit(1);
//     }
//
//     out << "z = " << z_int << endl;
//
//     out.close();

    // NOVEMBER 17th 2025
    // to call a constructor
    // double length = 10.0, width = 10.0;
    // Rectangle.rectA(); // calls the default constructor, idk whay it's showing an error

    // November 19th 2025
    /* Friend Functions can be declared in the class itself, yet have access to private data from the class declaration
     * -> The Friend Function MUST be declared within the class file, but can be DEFINED in the cpp file
     * -> Because of the declaration within the cpp file, the friend function has "extraordinary access" to private data
     * -> the friend fucntion does NOT need to be called like [object name]::[function name], rather, can be called as [function_name]
     * -> friend function must be declared with friend keyword
     *
     * ex. >> friend void displaySalary(Employee emp);
     *
     * 4 Ways to Add Objects
     * 1. c = a.add(b) // this is a memeber function
     *
     * // Definintion
     * Counter Counter::add(const Counter &b) const { // why do you have to write const, ig its just the syntax?
     *          Counter temp;
     *          temp.value = b.value + value; // b.value is the value of the argument, value is the valye of a
     *          return temp; // a+b
     * }
     *
     * --------------------------------------------------
     * General Syntax of writing member functions
     * Object Object::function(...args) const{
     *      Object temp;
     *      temp.value = (operation)temp;
     *      return temp;
     *----------------------------------------------------
     *
     * 2. c = add(a,b) // this is a friend function
     *
     * Counter add(const Counter &a, const Counter &b) {
     *      Counter = temp;
     *      temp.value a.value + b.value;
     *      return temp;
     * }
     *
     * 3. c = a + b // inherent use of + operator
     *
     * Counter operator +(const Counter &c);
     *
     *  Counter Counter::operator +(const Counter &c) const {
     *      Counter temp;
     *      temp.value = value + c.value;
     *      return value;
     * }
     *
     * 4. c = a + b // + is a friend function that has access to the private data for a and b
     *
     * friend Counter operator +(const Counter &a, const Counter &b);
     *
     * Counter +(const Counter &a, const Counter &b){
     *      Counter temp;
     *      temp.value = a.value + b.value;
     *      return temp;
     * }
     *
     * * /





}