#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

void enter_sides(double &a, double &b, double &c);
bool check_sides(double a, double b, double c);
double calculate_angle(double a, double b, double c);

int main() {
    double a, b, c;
    enter_sides(a, b, c);
    if (check_sides(a, b, c)) {
        cout << fixed << setprecision(2)  << calculate_angle(a, b, c) << endl;
    } else {
        return 1;
    }

    return 0;
}

void enter_sides(double &a, double &b, double &c) {
    cin >> a >> b >> c;
}

bool check_sides(double a, double b, double c) {
    if ((a+b <= c) || (a+c <= b) || (b+c <= a)) {
        return false;
    } else if (a <= 0 || b <= 0 || c <= 0) {
        return false;
    } else {
        return true;
    }
}

double calculate_angle(double a, double b, double c) {
    double cosTheta = (a*a + b*b - c*c) / (2 * a * b);

    double thetaRad = acos(cosTheta);
    double thetaDeg = thetaRad * 180.0 / M_PI;
    return thetaDeg;
}