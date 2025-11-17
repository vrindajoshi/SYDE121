#include "lettercount.h"
#include <iostream>
#include <fstream>
using namespace std;

// main sub function
void count_letters(ifstream& instream, ofstream& outstream) {

    // main string
    string line;

    // call the read line function
    read_line(line, instream);

    int letterArray[26][2];
    int numLetters = 0;

    count_occurences(line, letterArray, numLetters);

    sort_array(letterArray, numLetters);

    output(outstream, letterArray, numLetters);
}
// -----------------------------------------------------------------------
// sub functions of main sub functions
void read_line(string& line, ifstream& instream) {

    // initialize variables
    string temp;

    // take in the value of the sentence
    while (getline(instream, temp)) {
        line += temp;
    }

}

// function to update the number of occurences/sort into array
void count_occurences(string line, int (&letterArray)[26][2], int &numLetters) {
    // initialize empty array
    for (int i = 0; i < 26; i++) {
        letterArray[i][0] = 0;
        letterArray[i][1] = 0;
    }

    // for each letter in the line
    for (char c: line) {
        // get the ascii value of the letter
        int ascii = c;
        bool assigned = false; // the value has not yet been assigned


        // check: if letter is lowercase
        if (c >= 'a' && ascii <= 'z') {
            // check each letter that has already been assigned
            for (int j = 0; j < numLetters; j++) {
                if (letterArray[j][0] == ascii) { // if the first column letter is the same as the letter
                    letterArray[j][1]++; // increment prescence by 1
                    assigned = true;
                    break; // break out of the for loop
                }
            }

            // if not match -> place value at the end
            if (!assigned) {
                letterArray[numLetters][0] = ascii;
                letterArray[numLetters][1] = 1;
                numLetters++;
            }
        }

    }

}

void sort_array(int (&letterArray)[26][2], int numLetters) {

    // sort array using insertion sort --> descending
    for (int i = 1; i < numLetters; ++i) { // numLetter represents the relavant size of the array
        // sort by descending could values
        for (int j = i-1; j >= 0 && letterArray[j+1][1] > letterArray[j][1]; j--) {
            swap(letterArray[j][0], letterArray[j][1], letterArray[j+1][0], letterArray[j+1][1]);
        }
    }

    // sort values that have the same value in ascending order
    for (int min = 0; min < numLetters;) { // numLetter represents the relavant size of the array

        int max = min;

        while (max + 1 < numLetters && letterArray[max + 1][1] == letterArray[min][1]) {
            max++;
        }

        // sort min to max
        for (int i = min+1; i <= max; ++i) { // numLetter represents the relavant size of the array
            // sort by descending could values
            for (int j = i-1; j >= min && letterArray[j+1][0] < letterArray[j][0]; j--) {
                swap(letterArray[j][0], letterArray[j][1], letterArray[j+1][0], letterArray[j+1][1]);
            }
        }

        // change min value
        min = max+1;
    }
}

void swap(int &letterA, int &A, int &letterB, int&B) {
    int tempLetter = letterA;
    int tempInt = A;
    A = B;
    letterA = letterB;
    letterB = tempLetter;
    B = tempInt;
}

void output(ofstream& outstream, int (letterArray)[26][2], int numLetters) {

    outstream << "Letter\tOccurrence\n";
    for (int i = 0; i < numLetters; i++) {
        outstream << (char)letterArray[i][0] << "\t" << letterArray[i][1] << endl;
    }

}