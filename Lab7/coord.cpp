#include "coord.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void get_point(Point3D &pt) {
    cout << "Enter details for your point: " << endl;

    // point id details
    cout << "Enter ID: " << endl;
    cin >> pt.id;
    cout << "Point ID is " << pt.id << endl;

    // x details
    cout << "Enter x-coordinate: " << endl;
    cin >> pt.x;
    cout << "X-coordinate is " << pt.x << endl;

    // y details
    cout << "Enter y-coordinate: " << endl;
    cin >> pt.y;
    cout << "Y-coordinate is " << pt.y << endl;

    // z details
    cout << "Enter z-coordinate: " << endl;
    cin >> pt.z;
    cout << "Z-coordinate is " << pt.z << endl;

    // x details
    cout << "Classify the accuracy of the the point " << endl;
    cin >> pt.order;
    cout << "The accuracy is " << pt.order << endl;
}

void print_point(const Point3D &pt) {
    cout << "Point ID: " << setw(10) << pt.id << endl;
    cout << "X-coordinate: " << setw(10) <<  pt.x << endl;
    cout << "Y-coordinate: " << setw(10) << pt.y << endl;
    cout << "Z-coordinate: " << setw(10) << pt.z << endl;
    cout << "Classification: " << setw(10) << endl;
}

double spatial_dist(const Point3D &pt1, const Point3D &pt2) {
    return sqrt( (pt1.x-pt2.x)*(pt1.x-pt2.x) + (pt1.y-pt2.y)*(pt1.y-pt2.y) + (pt1.z-pt2.z)*(pt1.z-pt2.z) );
}

double plani_dist(const Point3D &pt1, const Point3D &pt2) {
    return sqrt( (pt1.x-pt2.x)*(pt1.x-pt2.x) + (pt1.y-pt2.y)*(pt1.y-pt2.y) );
}

double height_diff(const Point3D &pt1, const Point3D &pt2) {
    return pt2.z - pt1.z;
}

double azimuth(const Point3D &pt1, const Point3D &pt2) {
    return (atan2( pt2.y - pt1.y, pt1.x - pt2.x )*180/M_PI);
}
