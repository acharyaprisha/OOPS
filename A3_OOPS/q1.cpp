#include <iostream>
using namespace std;

class ptrr {
public:
    int x;
    void show() {
        cout << "Value of x is " << x << endl;
    }
};

int main() {
    ptrr obj;
    ptrr *ptr;
    ptr = &obj;

    obj.x = 10;   
    obj.show();

    ptr->x = 20;    
    ptr->show();

    return 0;
}
