//
// Created by vrind on 2025-11-17.
//

#ifndef LECTURENOTES_RECTANGLE_H
#define LECTURENOTES_RECTANGLE_H

#include <string>


class Rectangle {
public:
    Rectangle();
    Rectangle(const double length, const double width);
    Rectangle(const double length, const double width, const string &units);

    // member functions
    double perimeter() const;
    double area() const;
    void print_dim() const;

    // member functions
    double get_length() const;
    double get_width() const;
    string get_units() const;
    void set_length(const double length);
    void set_width(const double width);
    void set_units(const string &units);

private:
    double length;
    double width;
    string units;
};

#endif //LECTURENOTES_RECTANGLE_H