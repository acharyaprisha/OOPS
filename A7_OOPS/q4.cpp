#include<iostream>
#include<string>
using namespace std;

class student{
    protected:
    string name;
    int rollno;

    public:
    virtual void setdata()=0;
    virtual void display()=0;
};

class engineering: public student{
    public:
    string branch;
    void setdata() {
        cout << "Enter name and roll number of engineering student: ";
        cin >> name >> rollno;
        cout << "Enter branch of engineering student: ";
        cin >> branch;
    }
    void display() {
        cout << "Engineering Student: " << name << ", Roll Number: " << rollno << ", Branch: " << branch << endl;
    }
};

class medicine: public student{
    public:
    string specialization;
    void setdata() {
        cout << "Enter name and roll number of medicine student: ";
        cin >> name >> rollno;
        cout << "Enter specialization of medicine student: ";
        cin >> specialization;
    }
    void display() {
        cout << "Medicine Student: " << name << ", Roll Number: " << rollno << ", Specialization: " << specialization << endl;
    }
};

class science: public student{
    public:
    string field;
    void setdata(){
        cout<<"enter name and roll number of science student: ";
        cin>>name>>rollno;
        cout<<"enter field of science student: ";
        cin>>field;
    }
    void display() {
        cout << "Science Student: " << name << ", Roll Number: " << rollno << ", Field: " << field << endl;
    }
};

int main(){
    engineering e;
    medicine m;
    science s;

    e.setdata();
    e.display();
    m.setdata();
    m.display();
    s.setdata();
    s.display();

    return 0;
}