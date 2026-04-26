#include <iostream>
using namespace std;

class arrayy{
    int arr[100];
    int size;

public:
        void input() {
        cout << "enter size of array: ";
        cin >> size;

        cout << "enter elements:"<<endl;
        for(int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    int& operator[](int index) {
        if(index < 0 || index >= size) {
            cout << "index out of bounds"<<endl;
            exit(0); 
        }
        return arr[index];
    }

    void display() {
        for(int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    arrayy a;
    a.input();

    int index;
    cout << "enter index: ";
    cin >> index;

    cout << "element is" << a[index] << endl;

    return 0;
}