#include <iostream>
#include <string>
using namespace std;

void end() {
    cout << "The End" << endl;
    exit(0);
}

void enter_nums(string &n1, string &n2) {
    cin >> n1;
    if (n1 == "-1") end();

    cin >> n2;
    if (n2 == "-1") end();

    if (n1.length() > 20 || n2.length() > 20) {
        cout << "Integer Overflow" << endl;
        exit(1);
    }

    for (char c : n1) {
        if (!isdigit(c)) {
            cout << "Invalid input" << endl;
            exit(1);
        }
    }

    for (char c : n2) {
        if (!isdigit(c)) {
            cout << "Invalid input" << endl;
            exit(1);
        }
    }
}

string add_large_numbers(const string &n1, const string &n2) {
    string result = "";
    int carry = 0;

    int i = n1.length() - 1;
    int j = n2.length() - 1;

    while (i >= 0 || j >= 0 || carry > 0) {
        int digitA = (i >= 0) ? n1[i] - '0' : 0;
        int digitB = (j >= 0) ? n2[j] - '0' : 0;

        int sum = digitA + digitB + carry;
        carry = sum / 10;
        sum = sum % 10;

        result = char(sum + '0') + result;
        i--; j--;
    }

    return result;
}

void display_num(const string &sum) {
    cout << "Sum: " << sum << endl;
}

int main() {
    string n1, n2;

    while (true) {
        enter_nums(n1, n2);
        string sum = add_large_numbers(n1, n2);
        display_num(sum);
    }
}
