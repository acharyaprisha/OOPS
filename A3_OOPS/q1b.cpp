#include <iostream>
using namespace std;

class Demo {
    int x;
public:
    void set(int x) {
        this->x = x;
    }
    void show() {
        cout << "Value = " << x << endl;
    }
};

int main() {
    Demo d;
    d.set(50);
    d.show();
    return 0;
}
