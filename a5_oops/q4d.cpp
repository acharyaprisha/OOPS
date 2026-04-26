#include <iostream>
using namespace std;

class A {
public:
    void displayA() {
        cout << "Class A"<<endl;
    }
};

class B : public A {
public:
    void displayB() {
        cout << "Class B"<<endl;
    }
};

class C : public B {
public:
    void displayC() {
        cout << "Class C"<<endl;
    }
};

int main() {
    C o;
    o.displayA();
    o.displayB();
    o.displayC();
}
