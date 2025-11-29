#include <iostream>
#include <vector>
using namespace std;

template <typename T> // The param for typename (T) can be changes, merely convention to use T
class TwoNumbers {
private:
        T num1, num2;
public:
    TwoNumbers(T num1, T num2) : num1(num1), num2(num2) {}

    T getMax() {
        if (num1 >= num2) {
            return num1;
        }
        else {
            return num2;
        }
    }
};

int main() {
    TwoNumbers <int> TwoNumbr_example(5, 10);
    cout << TwoNumbr_example.getMax()<<endl;

    TwoNumbers <double> TwoNumbr_double_example(1.00, 0.99);
    cout << TwoNumbr_double_example.getMax();
}
