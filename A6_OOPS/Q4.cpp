#include<iostream>
using namespace std;

class B;

class A {
private:
    int numA;

public:
    A(int a) : numA(a) {}

    friend int add(const A&, const B&);
};

class B {
private:
    int numB;

public:
    B(int b) : numB(b) {}

    friend int add(const A&, const B&);
};

int add(const A &obj1, const B &obj2) {
    return obj1.numA + obj2.numB;
}

int main() {
    A obj1(10);
    B obj2(20);

    cout << "Sum = " << add(obj1, obj2);

    return 0;
}