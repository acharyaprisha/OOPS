#include <iostream>
using namespace std;

class complex {
    int real, imag;

public:
    friend istream& operator>>(istream& in, complex& c);
    friend ostream& operator<<(ostream& out, complex& c);
};

istream& operator>>(istream& in, complex& c) {
    cout << "Enter real part: ";
    in >> c.real;

    cout << "Enter imaginary part: ";
    in >> c.imag;

    return in;
}

ostream& operator<<(ostream& out, complex& c) {
    out << c.real << " + " << c.imag << "i";
    return out;
}

int main() {
    complex c1;
    cin >> c1;
    cout << "complex no.: " << c1 << endl;
    return 0;
}