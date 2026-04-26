#include <iostream>
using namespace std;

class Demo {
private:
    void privateFunc() {
        cout << "private function" << endl;
    }

public:
    void publicFunc() {
        privateFunc();
    }
};

int main() {
    Demo d;
    d.publicFunc();
    return 0;
}
