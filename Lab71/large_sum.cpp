#include <iostream>
#include <cmath>
using namespace std;

void end() {
    cout << "The End" << endl;
    exit(0);
}

void enter_nums(string &n1, string &n2) {

    // take in n1, check for no -1
    cin >> n1;
    if (n1 == "-1") end();

    // take in n1, check for no -1
    cin >> n2;
    if (n2 == "-1") end();

    if (n1.length() > 20 || n2.length() > 20) {
        cout << "Integer Overflow" << endl;
        exit(1);
    }

    // duplicate strings
    string num1= n1;
    string num2= n2;

    // check if character value is an integer 0-9, sentinel is not stored inside
    // reverse the order of the string
    int i = n1.length()-1;

    for (char c : n1) {
        if (!isdigit(c)) {
            if (c == '-') {
                end();
            } else {
                cout << "Invalid input" << endl; exit(1);
            }
        }

        num1[i] = c;
        i--;
    }
    for (char c : n2) {
        if (!isdigit(c)) {
            if (c == '-') {
                end();
            } else {
                cout << "Invalid input" << endl; exit(1);
            }
        }

        // reverse the order of the string
        int i = n2.length()-1;
        num2[i] = c;
        i--;

    }

    n1 = num1;
    n2 = num2;

}

int add_large_numbers(string n1, string n2) {

    // check which string is longer
    string l = n1.length() >= n2.length() ? n1 : n2; // larger string
    string s = n1.length() < n2.length() ? n1 : n2; // smaller string

    int sum = 0;

    // add together digits that are correlated
    for (int j = 0; j < s.length(); j++) {
         int base = ((s[j] - '0') + (l[j] - '0'));
         sum += base*pow(10, j);
    }

    for (int i = s.length(); i < l.length(); i++) {

        // add the rest of the larger string's digits
        sum += (l[i] - '0')*pow(10, i);
    }

    return sum;
}

void display_num(int sum) {
    cout << "Sum: " << sum << endl;
}

int main() {
    string n1, n2;
    enter_nums(n1, n2);
    display_num(add_large_numbers(n1, n2));
    return 0;
}
