#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number(if else method): ";
    cin >> n;

    if (n % 2 == 0)
        cout << "even";
    else
        cout << "odd";

    int a;
    cout << "Enter number (this is for conditional operator): ";
    cin >> a;

    (a % 2 == 0) ? cout << "even" : cout << "odd";
    return 0;
}

