#ifndef LAB0801_MATRIXMATH_H
#define LAB0801_MATRIXMATH_H
#include <fstream>
using namespace std;

void main_multiplication();
void read_file(int (&array)[100][100], int &r1, int &c1, ifstream &instream); // reads the contents of a specified file
void matrix_mult(int (arr1)[100][100], int (arr2)[100][100], int (&result)[100][100], int r1, int c1, int c2); // performs matrix multiplication
void print_matrix_to_file(int (matrix[100][100]), int nrows, int ncols, ofstream &out);

#endif //LAB0801_MATRIXMATH_H