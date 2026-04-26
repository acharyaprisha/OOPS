#include<iostream>
using namespace std;

class Rectangle {
private:
 int length;
 int breadth;

 public:
 Rectangle(){
    length=0;
    breadth=0;
 }

public:
Rectangle(int a){
length=a;
breadth=a;
}

public:
Rectangle(int a, int b){
    length=a;
    breadth=b;
    }

    int area(){
        return length*breadth;
    }
};

int main(){
    Rectangle r1;
    cout<<"area according to part a"<< r1.area()<<endl;
    Rectangle r2(5);
    cout<<"area according to part b"<< r2.area()<<endl;
    Rectangle r3(5,6);
    cout<<"area according to part c"<< r3.area()<<endl;
    return 0;
}