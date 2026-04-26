#include <iostream>
using namespace std;

int main() {
    int choice;
    float a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "1.add, 2.subtract, 3.multiply, 4.divide"<< endl;
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {
        case 1: cout << "Sum = " << a + b; break;
        case 2: cout << "Difference = " << a - b; break;
        case 3: cout << "Product = " << a * b; break;
        case 4: cout << "Quotient = " << a / b; break;
        default: cout << "Invalid";
    }

    return 0;
}
