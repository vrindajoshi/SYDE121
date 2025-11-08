#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int manager_count = 0, hourly_count = 0, commission_count = 0, piece_count = 0;
    double manager_pay = 0.0, hourly_pay = 0.0, commission_pay = 0.0, piece_pay = 0.0;
    bool keepRunning = true;

    cout << "Enter in the Pay Data (Enter -1 to Stop):";
    while (keepRunning) {
        int workerType;
        cin >> workerType;
        if (workerType == -1) break;

        switch (workerType) {
            case 1: {
                manager_count++;
                double weeklySalary;
                cin >> weeklySalary;
                manager_pay += weeklySalary;
                break;
            }
            case 2: {
                hourly_count++;
                double hoursWorked, hourlyWage;
                cin >> hoursWorked >> hourlyWage;
                if (hoursWorked <= 40) {
                    hourly_pay += hoursWorked*hourlyWage;
                    break;
                } else {
                    hourly_pay += (40*hourlyWage + (hoursWorked-40)*(hourlyWage*1.5));
                    break;
                }
            }
            case 3: {
                commission_count++;
                double weeklySales;
                cin >> weeklySales;
                commission_pay += (250 + 0.057*weeklySales);
                break;
            }
            case 4: {
                piece_count++;
                int piecesProduced;
                double valuePerPiece;
                cin >> piecesProduced >> valuePerPiece;
                piece_pay += piecesProduced*valuePerPiece;
                break;
            }
            case -1: {
                keepRunning = false;
                break;
            }

            default: {
                return 1;
            }
        }
    }

        cout << fixed << setprecision(2);

        cout << "Summary\n";

        cout << "Worker Type    Number      Total Pay\n";
        cout << "====================================\n";

        cout << "Manager        ";
        cout << setw(4) << manager_count;
        cout << "       ";
        cout << fixed << setprecision (2) << setw(9) << manager_pay;
        cout << endl;

        cout << "Hourly         ";
        cout << setw(4) << hourly_count;
        cout << "       ";
        cout << fixed << setprecision (2) << setw(9) << hourly_pay;
        cout << endl;

        cout << "Commission     ";
        cout << setw(4) << commission_count;
        cout << "       ";
        cout << fixed << setprecision (2) << setw(9) << commission_pay;
        cout << endl;

        cout << "Piece          ";
        cout << setw(4) << piece_count;
        cout << "       ";
        cout << fixed << setprecision (2) << setw(9) << piece_pay;
        cout << endl;

        cout << "====================================\n";
        cout << "TOTAL          ";
        cout << setw(4);
        cout << manager_count + hourly_count + commission_count + piece_count;
        cout << "       ";
        cout << fixed << setprecision (2) << setw(9);
        cout << manager_pay + hourly_pay + commission_pay + piece_pay;
        cout << endl;

        return 0;
}