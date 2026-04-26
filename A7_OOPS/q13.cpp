#include <iostream>
#include <cmath>
using namespace std;

class polar {
    float r, angle;

public:
    polar(float radius, float a) {
        r = radius;
        angle = a;
    }

    float rval() { return r; }
    float angleval() { return angle; }
};

class cartesian {
    float x, y;

public:
    cartesian(polar p) {
        x = p.rval() * cos(p.angleval());
        y = p.rval() * sin(p.angleval());
    }

    void show() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() {
    polar p(10, 5);
    cartesian c = p; 
    c.show();
    return 0;
}