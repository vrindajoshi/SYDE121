#include <iostream>
using namespace std;

int main() {

    // initialize variables
    long seconds, minutes, hours, days, weeks;

    // get user prompt
    cout << "Enter seconds: " << endl;
    cin >> seconds;
    string valueUnits[5] = {"weeks", "days", "hours", "minutes", "seconds"};

    // create unit array
    if (seconds >= 0) {
        weeks = seconds / (3600 * 24 * 7);
        seconds %= (3600 * 24 * 7);
        days = seconds / (24 * 3600);
        seconds %= (24 * 3600);
        hours = seconds / (60 * 60);
        seconds %= (60 * 60);
        minutes = seconds / 60;
        seconds %= 60;
    } else {
        return 1;
    }

    long values[5] = {weeks, days, hours, minutes, seconds};

    for (int i = 0; i < 3; i++) {
        cout << values[i] << " " << valueUnits[i] << ", \n";
    }
    cout << values[3] << " " << valueUnits[3] << " and \n";
    cout << values[4] << " " << valueUnits[4] << ".";

    return 0;

}
