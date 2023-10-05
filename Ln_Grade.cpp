#include <iostream>
using namespace std;

string calgrade(float grade_number)
{
    if (grade_number >= 80 && grade_number <= 100)
    {
        return "Grade = A";
    }
    else if (grade_number >= 75 && grade_number <= 79)
    {
        return "Grade = B+";
    }
    else if (grade_number >= 70 && grade_number <= 74)
    {
        return "Grade = B";
    }
    else if (grade_number >= 65 && grade_number <= 69)
    {
        return "Grade = C+";
    }
    else if (grade_number >= 60 && grade_number <= 64)
    {
        return "Grade = C";
    }
    else if (grade_number >= 55 && grade_number <= 59)
    {
        return "Grade = D+";
    }
    else if (grade_number >= 50 && grade_number <= 54)
    {
        return "Grade = D";
    }
    else if (grade_number >= 0 && grade_number <= 49)
    {
        return "Grade = F";
    }
    else
    {
        return "ERROR !!!";
    }
}
void input()
{
    int grade_number;
    cout << "Input grade : ";
    cin >> grade_number;
}
void display()
{
}