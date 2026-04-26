#include <iostream>
using namespace std;

int main() {
    float c, f;

    cout << "Enter temperature in Celsius: ";
    cin >> c;

    f = (9 * c / 5) + 32;

    cout << "temperature in Fahrenheit is " << f<< endl;
    return 0;
}
