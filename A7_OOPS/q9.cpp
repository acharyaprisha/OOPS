#include <iostream>
using namespace std;

class func {
    int sum;

public:
    func() {
        sum = 0;
    }

    void operator()(int a[], int n) {
        sum = 0;
        for(int i = 0; i < n; i++) {
            sum += a[i];
        }
    }

    void display() {
        cout << "sum = " << sum << endl;
    }
};

int main() {
    func obj;

    int n;
    cout << "enter number of elements: ";
    cin >> n;

    int arr[100];
    cout << "enter elements:"<<endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    obj(arr, n);

    obj.display();

    return 0;
}