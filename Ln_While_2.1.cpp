#include <iostream>
using namespace std;
int main()
{

    int order, omeg, total = 0;
    do
    {
        cout << "Menu" << endl;
        cout << "1. Lay" << endl;
        cout << "2. Pocky" << endl;
        cout << "3. Testo" << endl;
        cout << "4. Oreo" << endl;
        cout << "5. Pepsi" << endl;
        cout << "6. Singha" << endl;
        cout << "Input Order : ";
        cin >> order;

        if (order == 1)
        {
            total += 20;

            cout << "1. Egg" << endl;
            cout << "2. Omlet" << endl;
            cout << "3. Close" << endl;
            cout << "Input Order : ";
            cin >> omeg;
            if (omeg == 1)
            {
                total += 7;
            }
            if (omeg == 2)
            {
                total += 10;
            }
            if (omeg == 3)
            {
                continue;
            }
        }
        if (order == 2)
        {
            total += 30;

            cout << "1. Egg" << endl;
            cout << "2. Omlet" << endl;
            cout << "3. Close" << endl;
            cout << "Input Order : ";
            cin >> omeg;
            if (omeg == 1)
            {
                total += 7;
            }
            if (omeg == 2)
            {
                total += 10;
            }
            if (omeg == 3)
            {
                continue;
            }
        }
        if (order == 3)
        {
            total += 40;

            cout << "1. Egg" << endl;
            cout << "2. Omlet" << endl;
            cout << "3. Close" << endl;
            cout << "Input Order : ";
            cin >> omeg;
            if (omeg == 1)
            {
                total += 7;
            }
            if (omeg == 2)
            {
                total += 10;
            }
            if (omeg == 3)
            {
                continue;
            }
        }
        if (order == 4)
        {
            total += 50;

            cout << "1. Egg" << endl;
            cout << "2. Omlet" << endl;
            cout << "3. Close" << endl;
            cout << "Input Order : ";
            cin >> omeg;
            if (omeg == 1)
            {
                total += 7;
            }
            if (omeg == 2)
            {
                total += 10;
            }
            if (omeg == 3)
            {
                continue;
            }
        }
        if (order == 5)
        {
            total += 60;

            cout << "1. Egg" << endl;
            cout << "2. Omlet" << endl;
            cout << "3. Close" << endl;
            cout << "Input Order : ";
            cin >> omeg;
            if (omeg == 1)
            {
                total += 7;
            }
            if (omeg == 2)
            {
                total += 10;
            }
            if (omeg == 3)
            {
                continue;
            }
        }
        if (order == 6)
        {
            total += 70;

            cout << "1. Egg" << endl;
            cout << "2. Omlet" << endl;
            cout << "3. Close" << endl;
            cout << "Input Order : ";
            cin >> omeg;
            if (omeg == 1)
            {
                total += 7;
            }
            if (omeg == 2)
            {
                total += 10;
            }
            if (omeg == 3)
            {
                continue;
            }
        }
        else{
            cout << "Error ! \n";
            break;
        }

    } while (order != 0);
    cout << "Pay = " << total << " Bath";
    return 0;
}