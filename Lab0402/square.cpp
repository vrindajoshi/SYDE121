#include <iostream>
using namespace std;

int main() {

    // take in user input
    int n;
    cout << "Enter an even number between 2-20 (inclusive):" << endl;
    cin >> n;

    if (n <= 20 && n >=2 && n % 2 == 0) {
        ;
    } else {
        return 1;
    }

    // set count to 0;
    int count = 0;

    // while ( count < n )
    while (count < n) {
        // print ("*" \t)
        cout << "* ";
        // int column = 1
        int column = 1;
        // while ( column < n - 2 )
        while (column < n-1) {
            // if ( count == 1 or count == n-2 )
            if (count == 0 or count == n-1) {
                // print ("*" \t)
                cout << "* ";
                // else
            } else {
                // print (\t \t)
                cout << "  ";
            }
            column++;
        }
        // print ("*" \t)
        cout << "* \n";
        count++;
    }

    return 0;
}