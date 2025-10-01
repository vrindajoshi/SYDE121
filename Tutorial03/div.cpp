#include <iomanip>
#include <iostream>
using namespace std;

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the <b>lang</b> variable name to see how CLion can help you rename it.
    double number1;
    double number2;
    cout << "Enter two numbers: ";
    cin >> number1 >> number2;

    if (number2 != 0) {
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "\n Dividing " << number1 << " by " << number2 << " gives " << number1/number2 << "." << endl;
    } else {
        return 1;
    }

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}