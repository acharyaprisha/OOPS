#include <iostream>
using namespace std;

int main() {
    int days;
    float fine = 0;

    cout << "Enter number of late days: ";
    cin >> days;

    if (days <= 5)
        fine = days * 0.50;
    else if (days <= 10)
        fine = (5 * 0.50) + (days - 5) * 1;
    else if (days <= 30)
        fine = (5 * 0.50) + (5 * 1) + (days - 10) * 5;
    else {
        cout << "your membership has been cancelled";
        return 0;
    }

    cout << "Fine is Rs " << fine;
    return 0;
}
