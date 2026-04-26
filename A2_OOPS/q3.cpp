#include <iostream>
using namespace std;

class Demo {
private:
    void privateFunc() {
        cout << "Private function executed\n";
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
