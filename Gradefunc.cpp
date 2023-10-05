#include <iostream>
using namespace std;

float input_score()
{
    float grade_number;
    cout << "Input Score : ";
    cin >> grade_number;
    return grade_number;
}

string cal_grade(float grade_number)
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

void display_student_info(int student_number, float score, string grade)
{
    cout << "Student : " << student_number << " Score = " << score << " " << grade << endl;
}

int main()
{
    for (int student_number = 1; student_number <= 20; student_number++)
    {
        float score = input_score();
        string grade = cal_grade(score);
        display_student_info(student_number, score, grade);
    }

    return 0;
}