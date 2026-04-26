#include <iostream>
using namespace std;

class Test {
public:
    void show();
};

void Test::show() {
    cout << "Function defined outside class\n";
}

int main() {
    Test t;
    t.show();
    return 0;
}
