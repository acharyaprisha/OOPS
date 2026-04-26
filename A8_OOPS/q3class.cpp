#include<iostream>
using namespace std;

template<class T1type, class T2type>
class store{
    T1type x;
    T2type y;

    public:
    void data(){
       cout << "Enter value for x: ";
       cin >> x;
       cout << "Enter value for y: ";
       cin >> y;
    }

    void display(){
        cout << "x: " << x << endl;
        cout << "y: " << y << endl;
    }
};

int main(){
    store<char, double> s1;
    s1.data();
    s1.display();
}