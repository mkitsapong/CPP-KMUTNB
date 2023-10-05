#include <iostream>
#include <cmath>

using namespace std;

// ฟังก์ชันบวก
double add(double a, double b)
{
    return a + b;
}

// ฟังก์ชันลบ
double subtract(double a, double b)
{
    return a - b;
}

// ฟังก์ชันคูณ
double multiply(double a, double b)
{
    return a * b;
}

// ฟังก์ชันหาร
double divide(double a, double b)
{
    if (b == 0)
    {
        cout << "Can't divide by 0" << endl;
        return 0;
    }
    return a / b;
}

// ฟังก์ชันหารเอาเศษ
int mod(int a,int b)
{
    return a % b;
}

// ฟังก์ชันยกกำลัง
double power(double base, double exponent)
{
    return pow(base, exponent);
}

// ฟังก์ชันหาค่าสัมบูรณ์
double absolute(double a)
{
    return abs(a);
}

// ฟังก์ชันหาค่า sin
double sine(double a)
{
    return sin(a);
}

// ฟังก์ชันหาค่า cos
double cosine(double a)
{
    return cos(a);
}

// ฟังก์ชันหาค่า tan
double tangent(double a)
{
    return tan(a);
}

int main()
{
    double num1, num2;
    char operation;

    cout << "Input Number 1: ";
    cin >> num1;

    cout << "Input Number 2: ";
    cin >> num2;

    cout << "+  -  *  /  %" << endl;
    cout << "^  |  s  c  t" << endl;
    
    cout << "Please in put Operation : ";
    cin >> operation;

    double result;

    switch (operation)
    {
    case '+':
        result = add(num1, num2);
        break;
    case '-':
        result = subtract(num1, num2);
        break;
    case '*':
        result = multiply(num1, num2);
        break;
    case '/':
        result = divide(num1, num2);
        break;
    case '%':
        result = mod(num1, num2);
        break;
    case '^':
        result = power(num1, num2);
        break;
    case '|':
        result = absolute(num1);
        break;
    case 's':
        result = sine(num1);
        break;
    case 'c':
        result = cosine(num1);
        break;
    case 't':
        result = tangent(num1);
        break;
    default:
        cout << "Operator is not Valid." << endl;
        return 1;
    }

    cout << "Result : " << result << endl;

    return 0;
}