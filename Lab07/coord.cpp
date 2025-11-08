#include "coord.h"
#include <iostream>
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