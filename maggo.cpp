#include <iostream>
using namespace std;
int main()
{

    short fav1, fav2; // ย้าย short fav1, fav2;  มาไว้ด้านบน
    cout << "Welcome to my world!" << endl;
    const int pi = 3.14;
    cout << "Please enter 2 of your favorite integers: ";
    cin >> fav1, fav2;
    int a33 = fav1 + fav2; // เปลี่ยน 33a เป็นชื่อตัวแปรอื่น เช่น a33 a44 a55
    float b33 = abs(float(fav1 - fav2));
    float pi = 3.14159; //ใส่ float หน้าคำ pi = 3.14159 เพราะเป็นทศนิยม
    cout << "You will get married at age: " << a33 << endl; // เปลี่ยน 33a เป็นชื่อตัวแปรอื่น เช่น a33 a44 a55
    cout << "You will have " << b33 << " children" << endl;
    cout << "Good luck! Bye ^^" << endl;
    return 0;
}
