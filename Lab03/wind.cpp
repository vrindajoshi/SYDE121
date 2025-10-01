#include <cmath>
#include <iostream>
using namespace std;

int main() {

    // initialize variables
    double windKM, tempC, windMPH, tempF, windChill;

    // intake values
    cout << "Enter the temperature in Celsius and the Wind Speed in KPH, separated by a space: ";
    cin >> tempC >> windKM;

    // conversions
    tempF = (9.0/5.0) * tempC + 32;
    windMPH = windKM*0.6215;

    // calculate windchill
    if ( windMPH <= 4 && windMPH >= 0) {
        windChill = tempF;
    } else if ( windMPH > 4 && windMPH <= 45) {
        windChill = 91.4 - (10.45 + 6.69*sqrt(windMPH) - 0.447*windMPH)*(1.0/22.00)*(91.4 - tempF);
    } else if ( windMPH > 45 ) {
        windChill = 1.6*tempF - 55;
    } else {
        return 1;
    }

    // convert windChill (f) to windChill (c)
    windChill = (windChill - 32)*(5.00/9.00);

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "The wind chill index is " << windChill << ". Brrrr!" << endl;

    return 0;
}