#include "coord.h"
#include "coord.cpp"
#include <iostream>
using namespace std;

int main() {
    Point3D point1, point2;

    get_point(point1);
    get_point(point2);

    print_point(point1);
    print_point(point2);

    cout << "Spatial Distance: " << spatial_dist(point1, point2) << endl;;
    cout << "Planimetric Distance: " << plani_dist(point1, point2) << endl;;
    cout << "Heigh Distance: " << height_diff(point1, point2) << endl;;
    cout << "Azimuth : " << azimuth(point1, point2) << endl;;

    return 0;
}
