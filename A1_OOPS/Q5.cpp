#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Hello\nWorld" << endl;
    cout << "Hello\tWorld" << endl;
    cout << "Helloo\b World" << endl;

    cout << setw(10) << "C++" << endl;
    cout << setw(10) << "Lab" << endl;

    return 0;
}
