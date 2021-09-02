// groupActivity(Thur2ndSep).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//ACTIVITY 1: Cars & Bikes
//ACTIVITY 2: Shapes
//ACTIVITY 3: Area & Parimeter
//ACTIVITY 4: Student Grade

#include <iostream>
using namespace std;

//------------------------------------------------------------- Activity 4
class Student {
private:
    string studentName;
    float grade1, grade2, grade3, grade4, grade5;
public:
    Student(string sname = "ben", int g1 = 0, int g2 = 0, int g3 = 0, int g4 = 0, int g5 = 0) {
        studentName = sname;
        grade1 = g1;
        grade2 = g2;
        grade3 = g3;
        grade4 = g4;
        grade5 = g5;
    }

    string getName() {
        return studentName;
    }

    void setName(string x) {
        studentName = x;
    }

    void setGrade(int a, int b, int c, int d, int e) {
        grade1 = a;
        grade2 = b;
        grade3 = c;
        grade4 = d;
        grade5 = e;
    }

    void readGrade() {
        cout << "\n\tStudent Name: " << studentName << endl;
        cout << "\n\tGrades: " << endl;
        cout << grade1 << " ";
        cout << grade2 << " ";
        cout << grade3 << " ";
        cout << grade4 << " ";
        cout << grade5 << endl;

        cout << "\n\tGrade avg: ";
        cout << gradePercent();
    }

    char gradePercent() {
        float avg = finalGrade();

        if (avg >= 80) {
            return 'A';
        }
        else if (avg >= 60) {
            return 'B';
        }
        else if (avg >= 50) {
            return 'C';
        }
        else if (avg < 50) {
            return 'D';
        }
    }

    float finalGrade() {
        float avg;

        avg = (grade1 + grade2 + grade3 + grade4 + grade5) / 5;

        return avg;
    }
};
//------------------------------------------------------------- Activity 4


int main()
{


    //-------------------------------------------------------- Activity 4
    Student objStududent;
    string nameInput;
    int g1, g2, g3, g4, g5;

    cout << "\n\tPlease enter student name: ";
    cin >> nameInput;
    objStududent.setName(nameInput);

    cout << "\n\tPlease enter grades 1 - 4" << endl;
    cin >> g1 >> g2 >> g3 >> g4 >> g5;
    objStududent.setGrade(g1, g2, g3, g4, g5);

    objStududent.readGrade();


    //-------------------------------------------------------- Activity 4
}
