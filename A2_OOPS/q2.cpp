#include <iostream>
using namespace std;

class Student {
private:
    string name, degree, hostel;
    int rollNo;
    float cgpa;

    void privateMessage() {
        cout << "Private Function Called\n";
    }

public:
    void addDetails() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Degree: ";
        cin >> degree;
        cout << "Enter Hostel: ";
        cin >> hostel;
        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void updateCGPA() {
        cout << "Enter new CGPA: ";
        cin >> cgpa;
        privateMessage();   // calling private function
    }

    void displayDetails() {
        cout << "\nStudent Details\n";
        cout << name << " " << rollNo << " " << degree << " " << hostel << " " << cgpa << endl;
    }
};

int main() {
    Student s;
    s.addDetails();
    s.updateCGPA();
    s.displayDetails();
    return 0;
}
