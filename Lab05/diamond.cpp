#include <iostream>
using namespace std;

int main() {
    // initialize variables
    int diamondDimensions;
    int k = 0;
    int l = 0;

    // take in the value from user
    cout << "Enter Rows of Diamonds (Must be an odd integer from 1-20):" << endl;
    cin >> diamondDimensions;

    // ensure the value of the integer is positive
    diamondDimensions = abs(diamondDimensions);

    // check value
    if (diamondDimensions >=1 && diamondDimensions <= 20 && diamondDimensions%2 == 1) {
        ;
    } else {
        return 1;
    }

    // print diamond
    for (int i = 0; i < diamondDimensions; i++) {

        for (int j = 0; j < diamondDimensions; j++) {
            // make sure i+j is (3, 3+2i) on increase and (3+2i, 9) on decrease
            if ( (i+j) >= (diamondDimensions-1)/2 + l && (i+j) <= (diamondDimensions-1)/2 + k) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << "\n";
        if (i < diamondDimensions/2) {
            k+=2;
        } else {
            l+=2;
        }
    }


}

// NOTES
// valid i+j values for 7
//    3
//   345
//  34567
// 3456789
//  56789
//   789
//    9
