//
// Created by vrind on 2025-11-14.
//
#ifndef LAB0800_LETTERCOUNT_H
#define LAB0800_LETTERCOUNT_H

#include <fstream>
#include <string>
using namespace std;

void count_letters(ifstream& instream, ofstream& outstream);
void read_line(string& line, ifstream& instream);
void count_occurences(string line, int (&letterArray)[26][2], int &numLetters);
void sort_array(int (&letterArray)[26][2], int numLetters);
void swap(int &letterA, int &A, int &letterB, int&B);
void output(ofstream& outstream, int (letterArray)[26][2], int numLetters);

#endif //LAB0800_LETTERCOUNT_H