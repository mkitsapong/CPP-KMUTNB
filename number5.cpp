#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3, num4, num5;
    cout << "Enter five number : ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    cout << num1 << " : ";
    for (int i = 0; i < num1; i++)
    {
        cout << "*";
    }
    cout << endl;
    cout << num2 << " : ";
    for (int i = 0; i < num2; i++)
    {
        cout << "*";
    }
    cout << endl;
    cout << num3 << " : ";
    for (int i = 0; i < num3; i++)
    {
        cout << "*";
    }
    cout << endl;
    cout << num4 << " : ";
    for (int i = 0; i < num4; i++)
    {
        cout << "*";
    }
    cout << endl;
    cout << num5 << " : ";
    for (int i = 0; i < num5; i++)
    {
        cout << "*";
    }
}