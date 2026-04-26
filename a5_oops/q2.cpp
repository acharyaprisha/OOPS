#include<iostream>
using namespace std;

class base{
    protected:
    int x;

    public:base(){
        x=25;
    }

};

class derived:public base{
    public:
    void display(){
        cout<<"value of x will be "<<x<<endl;
    }
};

int main(){
    derived d;
    d.display();
    return 0;
}