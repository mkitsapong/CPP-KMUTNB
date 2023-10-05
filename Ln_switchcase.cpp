#include <iostream>
using namespace std;
int main(){
char cho;
cout << "Select : ";
cin >> cho;

switch (cho)
{
case '+':
    cout << "One";
    break;
case 2:
    cout << "Two";
    break;
case 3:
    cout << "Three";
    break;
    case 4:
    cout << "Four";
    break;
default:
    break;
}
    return 0;
}