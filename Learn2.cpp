#include <iostream>
using namespace std;
int main()
{

    int pay, hour;

    cout << "Enter Hour : ";
    cin >> hour;

    cout << "Total = "<<350*hour<<endl;

    int total = 350 * hour;

    cout << "Enter Payment : ";
    cin >> pay;
    cout << "Chang = " << pay - total;

    return 0;
}