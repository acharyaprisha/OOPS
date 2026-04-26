#include <iostream>
using namespace std;

class A {
public:
    void displayA() {
        cout << "Class A"<<endl;
    }
};

class B : public A {};
class C : public A {};
class D : public A {};

int main() {
    B b; C c; D d;
    b.displayA();
    c.displayA();
    d.displayA();
}