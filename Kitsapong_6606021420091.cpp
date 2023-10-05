#include <iostream>
using namespace std;
int main()
{
    int num;

    while (true)
    {
        cout << "Enter number : ";
        cin >> num;

        if (num >= 2 && num <= 100)
        {
            break;
        }
    }

    for (int i = num; i < num + 8; i += 2)
    {
        cout << "Mul : " << i << endl;
        for (int j = 1; j <= 12; j++)
        {
            cout << i << " x " << j << " = " << i * j <<endl;
        }
    }
    return 0;
}