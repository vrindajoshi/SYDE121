#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double f(double theta_deg, double rhs);
double bisection(double &lo, double &hi, double &rhs, double &tol);
int iterations = 0;

int main() {


    // take in values
    double rhs = 0, lo = 0, hi = 0, tol = 0;
    double theta_deg = 0;
    cin >> rhs >> lo >> hi >> tol;

    // check validity of values
    if (!(0 <= lo && lo < hi && hi <= 89)) { // values of theta are valid
        cout << 1;
        return 1;

    } else if (!(tol >= 1e-15 && tol <= 1e-6)) { // tolerance is valid
        cout << tol;
        return 1;

    } else if (f(lo, rhs) * f(hi, rhs) > 0) { // the root actually exists in between the values
        cout << 3;
        return 1;

    }

    // call function
    theta_deg = bisection(lo, hi, rhs, tol);


    // display results
    cout << fixed << setprecision(10) << theta_deg << " deg" << endl;
    cout << scientific << setprecision(12) << f(theta_deg,rhs) << endl;

    return 0;

}

double f(double theta_deg, double rhs) {
    double theta_rad = theta_deg * M_PI / 180.0;
    return tan(theta_rad) - sin(theta_rad) - rhs;
}

double bisection(double &lo, double &hi, double &rhs, double &tol) {
    double midpoint = (lo+hi)/2.0;

    iterations = 0;

    while ((hi - lo) / 2.0 > tol && iterations <= 256) {
        midpoint  = (lo + hi) / 2.0;

        // Determine which internal contains the root
        if (f(midpoint, rhs) * f(lo, rhs) > 0)
            lo = midpoint;
        else
            hi = midpoint;

        iterations++;
    }

    return (lo + hi) / 2.0;
}