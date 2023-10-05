#include <iostream>
using namespace std;
int main()
{
    int count = 1;
    int number;
    cout << "Input Number : ";
    cin >> number;

    if (number >= 2 && number <= 100)
    {
        for (int i = number; i < number + 4; i++)
        {
            while (count <= 12)
            {
                cout << number << "x" << i << " = " << number * i << endl;
                count++;
            }
        }
    }
}