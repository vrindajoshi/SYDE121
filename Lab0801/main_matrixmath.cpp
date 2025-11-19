#include "matrixmath.h"
#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ifstream instream;
    ofstream outstream;

    string input, output;
    cin >> input >> output;

    instream.open(input);
    if (!instream.is_open()) {
        cout << "Failed to open input.txt\n";
        return 1;
    }
    outstream.open(output);


    int array1[100][100], array2[100][100];
    int r1,c1,r2,c2;

    read_file(array1, r1, c1, instream);
    read_file(array2, r2, c2, instream);

    instream.close();

    // invalid data
    if (c1 != r2) {
        exit(1);
    }

    int result[100][100];

    matrix_mult(array1, array2, result, r1, c1, c2);

    print_matrix_to_file(result, r1, c2, outstream);

    outstream.close();

    exit(0);
}
