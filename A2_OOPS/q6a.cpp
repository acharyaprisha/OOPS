#include <iostream>
using namespace std;

class Test {
public:
    void show();
};

void Test::show() {
    cout << "function is define outside class" << endl;
}

int main() {
    Test t;
    t.show();
    return 0;
}
