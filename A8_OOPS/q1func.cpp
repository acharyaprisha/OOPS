#include <iostream>
using namespace std;

template <typename T>
void swapval(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 13, y = 20;
    swapval(x, y);
    cout << "swapping integers: " << x << " " << y << endl;

    float p = 3.8, q = 12.5;
    swapval(p, q);
    cout << "swapping floats: " << p << " " << q << endl;

    char c1 = 'a', c2 = 'y';
    swapval(c1, c2);
    cout << "swapping characters: " << c1 << " " << c2 << endl;

    return 0;
}