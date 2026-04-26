#include <iostream>
using namespace std;

class Sample {
public:
    int x;
    void show() {
        cout << "Value of x = " << x << endl;
    }
};

int main() {
    Sample obj;
    Sample *ptr;
    ptr = &obj;

    obj.x = 10;   
    obj.show();

    ptr->x = 20;    
    ptr->show();

    return 0;
}
