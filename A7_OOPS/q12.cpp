#include <iostream>
using namespace std;

class test {
    float value;

public:
      test(float v = 0) {
        value = v;
    }

    operator float() {
        return value;
    }
};

int main() {
    test t(8.892);
    float f;
    f = t;
    cout << "value is" << f << endl;
    return 0;
}