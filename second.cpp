#include <iostream>
using namespace std;

int main() {
    string name;       // use string for names
    float cgpa;
    int roll_num;

    cout << "Enter the name of student: ";
    cin >> name;

    cout << "Enter the student CGPA: ";
    cin >> cgpa;

    cout << "Enter the student roll number: ";
    cin >> roll_num;

    cout << "\n--- Student Details ---\n";
    cout << "Name: " << name << endl;
    cout << "CGPA: " << cgpa << endl;
    cout << "Roll Number: " << roll_num << endl;

    return 0;
}