#include <iostream>
using namespace std;

class LibraryUser{
public:
    string name;
    int id;
};

class student : public LibraryUser{
public:
    string grade;

    void input() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter student ID: ";
        cin >> id;
        cout << "Enter grade: ";
        cin >> grade;
    }

    void display() {
        cout << "student: " << name << " " << id << " " << grade << endl;
    }
};

class teacher : public LibraryUser{
public:
    string dept;

    void input() {
        cout << "Enter teacher name: ";
        cin >> name;
        cout << "enter teacher ID: ";
        cin >> id;
        cout << "enter department: ";
        cin >> dept;
    }

    void display() {
        cout << "teacher: " << name << " " << id << " " << dept << endl;
    }
};

int main(){
    student s;
    teacher t;
    
    s.input();
    s.display();
    t.input();
    t.display();

    return 0;
}