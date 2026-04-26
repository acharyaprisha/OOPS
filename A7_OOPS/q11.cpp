#include <iostream>
using namespace std;

class test {
private:
    float value;

public:
       test(float x) {
        value = x;
    }

    void display() {
        cout << "Value in object = " << value << endl;
    }
};

int main() {
    float f;
    cout << "Enter a float value: ";
    cin >> f;

    test t = f; 
    t.display();
    return 0;
}