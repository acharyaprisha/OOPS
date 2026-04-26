#include <iostream>
using namespace std;

template <class T>
    class arrayy {
    T arr[1000];
    int n;

public:
    void input() {
        cout << "enter number of elements: " << endl;
        cin >> n;

        cout << "enter elements:" << endl;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    void display() {
        cout << "elements in the array are:" << endl;
        for(int i = 0; i < n; i++) {
            cout << arr[i] <<endl;
        }
        cout << endl;
    }
};

int main() {
    arrayy<int> intarr;
    cout << "Integer Array" << endl;
    intarr.input();
    intarr.display();

    arrayy<float> floatarr;
    cout << "Float Array" << endl;
    floatarr.input();
    floatarr.display();

    return 0;
}