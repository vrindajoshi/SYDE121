#include <iostream>
using namespace std;

int multiplication();
int input;
void checkValue(int a, int b, int &firstTry);
int count = 0;
int firstTry = 0;
int totalQuestions = 0;

int main() {

    multiplication();

    cout << "\nCorrectly answered " << count << " of " << totalQuestions << " on the first try.\n";

    return 0;
}

int multiplication() {

    // generate + initialize numbers
    int a = rand()%10;
    int b = rand()%10;

    int firstTry = 1;

    // pose question
    cout << "\nHow much is " << a << " times " << b << "? (Enter -1 to end)";

    // take in input
    cin >> input;
    if (totalQuestions == 0 && input == -1) {
        return 0;
    } else {
        totalQuestions++;

        // function (input)
        checkValue(a, b, firstTry);
    }

    return 0;
}

void checkValue(int a, int b, int& firstTry) {
    // calculate if correct
    if (input == -1) {
        ;
    } else if (a*b == input) {
        cout << "\nVery good!\n\n";
        if (firstTry) {
            count++;
        }
        multiplication();
    } else {
        firstTry = 0;
        cout << "No. Please try again. " << endl;
        cout << "\nHow much is " << a << " times " << b << "? (Enter -1 to end)";
        cin >> input;
        checkValue(a, b, firstTry);
    }

}
