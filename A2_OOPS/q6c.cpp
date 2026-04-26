#include <iostream>
using namespace std;

class Demo {
public:
    static int x;
};

int Demo::x = 100;

int main() {
    cout << Demo::x;
    return 0;
}
