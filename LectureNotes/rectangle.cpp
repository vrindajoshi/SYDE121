#include "rectangle.h"
#include <iostream>
using namespace std;

// default constructor
Rectangle::Rectangle() {
    length = 1.0;
    width = 1.0;
    units = "cm";
}

Rectangle::Rectangle(const double length, const double width) : length(init_length), width(init_width) {
    units = "cm";
}

Rectangle::Rectangle(const double length, const double width, const string &units) : length(init_length), width(init_width), units(init_units) {
    if (init_units == "mm" || init_units == "cm" || init_units == "m") {
        units = init_units;
    } else {
        cout << "Error, units not recognized, setting units to cm" << endl;
        units = "cm";
    }
}


double Rectangle::perimeter() const {
    return (2*(length+width));
}

double Rectangle::area() const {
    return (length*width);
}

double Rectangle::get_length() const {
    return length;
}

double Rectangle::get_width() const {
    return width;
}

string Rectangle::get_units() const {
    return units;
}

void Rectangle::set_units(const string &units) : {
    if (init_units == "mm" || init_units == "cm" || init_units == "m") {
        units = init_units;
    } else {
        cout << "Error, units not recognized, setting units to cm" << endl;
        units = "cm";
    }
}

void Rectangle::set_width(const double new_width) : width(init_width) {}

void Rectangle::set_length(const double new_length) : length(init_length) {}

void Rectangle::print_dim() const {
    cout << endl << "Rectangle has length of " << length << " " <<
get_units() << " and width of " << width << " " << get_units()<< endl;
}
