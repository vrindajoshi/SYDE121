#include "matrixmath.h"

#include <iostream>

void read_file(int (&array)[100][100], int &r, int &c, ifstream &instream){ // reads the contents of a specified file

    // assume file has been opened

    // take in first array
    instream >> r >> c;

    // invalid data
    if (r > 100 || c > 100 ) {
        exit(1);
    }

    // take in values
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            instream >> array[i][j];
        }
    }

}

void matrix_mult(int (arr1)[100][100], int (arr2)[100][100], int (&result)[100][100], int r1, int c1, int c2){ // performs matrix multiplication

    //
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            int sum = 0;
            for (int k = 0; k < c1; k++) {
                sum += arr1[i][k] * arr2[k][j];
            }
            result[i][j] = sum;
        }
    }

}

void print_matrix_to_file(int (matrix[100][100]), int nrows, int ncols, ofstream &out) {

    for ( int r = 0; r < nrows; ++r )
    {
        for ( int c = 0; c < ncols; ++c )
            out << matrix[r][c] << " ";
        out << endl;
    }

}