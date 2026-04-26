#include <iostream>
using namespace std;

class Person {
protected:
    string name, address;

public:
    void inputP() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter address: ";
        cin >> address;
    }

    void displayP() {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
    }
};

class Staff : virtual public Person {
protected:
    int e_id;
    string dept;

public:
    void inputStaff() {
        cout << "enter employee id: ";
        cin >> e_id;
        cout << "enter department: ";
        cin >> dept;
    }

    void displayStaff() {
        cout << "employee id: " << e_id << endl;
        cout << "department: " << dept << endl;
    }
};

class Student : virtual public Person {
protected:
    int id;
    string grade;

public:
    void inputStu() {
        cout << "enter student id: ";
        cin>>id;
        cout << "enter grade: ";
        cin >> grade;
    }

    void displayStu() {
        cout << "student id: " <<id << endl;
        cout << "grade: " << grade << endl;
    }
};

class TeachingAssistant : public Staff, public Student {
public:
    void inputta() {
        inputP();
        inputStaff();
        inputStu();
    }

    void displayta() {
        cout << "teaching assistant details";
        displayP();
        displayStaff();
        displayStu();
    }
};

int main() {
    TeachingAssistant ta;
    ta.inputta();
    ta.displayta();
    return 0;
}