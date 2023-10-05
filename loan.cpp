#include <iostream>
using namespace std;
int main()
{
    double loan;
    double ait;
    double apay;
    int year;

    cout << "Input Loan Interest  Payment : \n";
    cin >> loan >> ait >> apay;

    double repay = loan;

    while (repay >= apay)
    {
        year++;

        double intpay = repay * (ait / 100);
        repay = (repay + intpay) - apay;
        cout << "Year " << year << " : Remaining Payment = " << repay << "million" << endl;
    }
    double total = (apay * year) + repay;

    cout << "Total Year of Payment : " << year << " Years" << endl;
    cout << "Total Amout Paid : " << total << " million" << endl;

    return 0;
}
