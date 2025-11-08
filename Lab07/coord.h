#ifndef COORD_H
#define COORD_H

struct Point3D {
    int id;
    double x;
    double y;
    double z;
    char order;
};

// namespace coord {
    void get_point(Point3D &pt);
    void print_point(const Point3D &pt);
    double spatial_dist(const Point3D &pt1, const Point3D &pt2);
    double plani_dist(const Point3D &pt1, const Point3D &pt2);
    double height_diff(const Point3D &pt1, const Point3D &pt2);
    double azimuth_diff(const Point3D &pt1, const Point3D &pt2);
//}

#endif //COORD_H;