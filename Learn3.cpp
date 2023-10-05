#include <iostream>
using namespace std;
int main()
{
    int hour, total, pay, change, test;
    cout << "enter hour : ";
    cin >> hour;
    total = 250 * hour;
    cout << "total : " << total << endl;
    cout << "pay : ";
    cin >> pay;
    change = pay - total;
    cout << "change : " << change << endl;

    if (change > 0)
    {
        cout << "has changes";
    }

    else
    {
    }

    return 0;
}