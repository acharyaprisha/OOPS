#include <iostream>
using namespace std;
class Demo
{
public:
    Demo()
    {
        cout << "Constructor called\n";
    }

    ~Demo()
    {
        cout << "Destructor called\n";
    }
};

int main()
{
    cout << " Dynamic Integer";
    int *p = new int;
    *p = 10;
    cout << "Integer value: " << *p << endl;
    delete p;

    cout << "Dynamic Float";
    float *f = new float;
    *f = 5.75;
    cout << "Float value: " << *f << endl;
    delete f;

    cout << "Dynamic Integer Array";
    int *arr = new int[5];
    for(int i = 0; i < 5; i++)
    {
        arr[i] = i + 1;
    }
    cout << "Integer array: ";
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;

    cout << "Dynamic Float Array";
    float *farr = new float[3];
    farr[0] = 1.1;
    farr[1] = 2.2;
    farr[2] = 3.3;

    cout << "Float array: ";
    for(int i = 0; i < 3; i++)
    {
        cout << farr[i] << " ";
    }
    delete[] farr;

    cout << " Dynamic Class Object ";
    Demo *d = new Demo();  
    delete d;              

    cout << " Dynamic Array of Objects ";
    Demo *darr = new Demo[2]; 
    delete[] darr;            

    return 0;
}
