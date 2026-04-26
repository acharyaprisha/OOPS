#include <iostream>
using namespace std;

class Test {
public:
    int x;
};

Test modify(Test t) {
    t.x = t.x + 10;
    return t;
}

int main() {
    Test t1, t2;
    t1.x = 5;

    t2 = modify(t1);

    cout << "Original x = " << t1.x << endl;
    cout << "Modified x = " << t2.x << endl;

    return 0;
}
