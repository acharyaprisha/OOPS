#include<iostream>
using namespace std;

class base{
    public:
    void display(){
        cout<<"Base class function called"<<endl;
    }
};

class derived:public base{
    public:
    void display(){
        cout<<"Derived class function called"<<endl;
    }
};

int main(){
    base b;
    derived d;
    b.display();
    d.display();
    return 0;
}
