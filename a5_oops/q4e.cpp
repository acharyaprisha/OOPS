#include <iostream>
using namespace std;

class A {
public:
    void displayA() {
        cout << "Class A"<<endl;
    }
};

class B : virtual public A {};
class C : virtual public A {};

class D : public B, public C {
public:
    void displayD() {
        cout << "Class D"<<endl;
    }
};

int main() {
    D o;
    o.displayA();
    o.displayD();
}
