#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int mark, credit;
    char addMore;
    int course = 1;

    double totalCredit = 0;
    double totalPoint = 0;
    double gradePoint;
    string grade;

    do
    {
        cout << "Enter course " << course << " mark: ";
        cin >> mark;

        while (mark < 0 || mark > 100)
        {
            cout << "Invalid mark. Enter again: ";
            cin >> mark;
        }

        cout << "Enter course " << course << " credit: ";
        cin >> credit;

        if (mark >= 90)
        {
            grade = "A+";
            gradePoint = 4.00;
        }
        else if (mark >= 80)
        {
            grade = "A";
            gradePoint = 4.00;
        }
        else if (mark >= 75)
        {
            grade = "A-";
            gradePoint = 3.67;
        }
        else if (mark >= 70)
        {
            grade = "B+";
            gradePoint = 3.33;
        }
        else if (mark >= 65)
        {
            grade = "B";
            gradePoint = 3.00;
        }
        else if (mark >= 60)
        {
            grade = "B-";
            gradePoint = 2.67;
        }
        else if (mark >= 55)
        {
            grade = "C+";
            gradePoint = 2.33;
        }
        else if (mark >= 50)
        {
            grade = "C";
            gradePoint = 2.00;
        }
        else if (mark >= 45)
        {
            grade = "C-";
            gradePoint = 1.67;
        }
        else if (mark >= 40)
        {
            grade = "D+";
            gradePoint = 1.33;
        }
        else if (mark >= 35)
        {
            grade = "D";
            gradePoint = 1.00;
        }
        else if (mark >= 30)
        {
            grade = "D-";
            gradePoint = 0.67;
        }
        else
        {
            grade = "E";
            gradePoint = 0.00;
        }

        double coursePoint = credit * gradePoint;

        cout << "Course " << course << " grade is " << grade << endl;
        cout << fixed << setprecision(2);
        cout << "Course " << course << " point is " << coursePoint << endl;

        totalCredit += credit;
        totalPoint += coursePoint;

        cout << "Add more course? (Y-yes / N-no): ";
        cin >> addMore;

        course++;

        cout << endl;

    } while (addMore == 'Y' || addMore == 'y');

    double cpa = totalPoint / totalCredit;

    cout << "Your total credit for this current semester: "
         << totalCredit << endl;

    cout << "Your total course point for this current semester: "
         << totalPoint << endl;

    cout << "Your CPA for this current semester: "
         << cpa << endl;

    return 0;
}