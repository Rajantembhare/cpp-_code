#include <iostream>
using namespace std;

int main() {
    string name;       // use string for names
    float cgpa;
    int roll_num;
    int idnum;

    cout << "Enter the name of student: ";
    cin >> name;

    cout << "Enter the student CGPA: ";
    cin >> cgpa;

    cout << "Enter the student roll number: ";
    cin >> roll_num;
    cout<<"enter your id num:";
    cin>>idnum;

    cout << "\n--- Student Details ---\n";
    cout << "Name: " << name << endl;
    cout << "CGPA: " << cgpa << endl;
    cout << "Roll Number: " << roll_num << endl;
    cout<<"ID Num:"<< idnum <<endl;

    return 0;
}