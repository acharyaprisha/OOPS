#include <iostream>
using namespace std;

class Complex {
    float real, imag;

public:
    void setComplex(float r, float i) {
        real = r;
        imag = i;
    }

    void displayComplex() {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex add(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main() {
    Complex c1, c2, sum;

    c1.setComplex(2.5, 3.5);
    c2.setComplex(1.5, 2.5);

    sum = c1.add(c2);

    cout << "Sum = ";
    sum.displayComplex();

    return 0;
}
