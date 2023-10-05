#include <iostream>
using namespace std;
int main()
{
    int milk, thaitea, greentea, sugar, day = 1;
    for (int i = 1; i <= 5; i++)
    {
        cout << "Day = " << day << endl;
        cout << "Enter your Milk :";
        cin >> milk;
        cout << "Enter your Thai Tea :";
        cin >> thaitea;
        cout << "Enter your Green Tea :";
        cin >> greentea;
        cout << "Enter your Sugar :";
        cin >> sugar;
        cout << "-------------------------------------" << endl;
        day++;
    }
    int totalmilk, totalthaitea, totalgreentea, totalsugar;

    totalmilk = milk + milk + milk + milk + milk;
    totalthaitea = thaitea + thaitea + thaitea + thaitea + thaitea;
    totalgreentea = greentea + greentea + greentea + greentea + greentea;
    totalsugar = sugar + sugar + sugar + sugar + sugar;

    cout << "Milk = " << totalmilk << endl;
    cout << "Thai Tea = " << totalthaitea << endl;
    cout << "Green Tea = " << totalgreentea << endl;
    cout << "Sugar = " << totalsugar << endl;

}