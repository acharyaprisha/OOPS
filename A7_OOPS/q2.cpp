#include<iostream>
using namespace std;

class shape{

    public:
    virtual void area(){
    cout<<"area undefined"<<endl;
    }
    
    virtual void display(){
    cout<<"this is the shape"<<endl;}
};

class circle: public shape{

    public:
    float r;
    void input() {
        cout << "Enter radius of circle: ";
        cin >> r;
    }

    void area() override {
        cout << "Area of Circle is " << 3.14 * r * r << endl;
    }

    void display() override {
        cout << "Shape: Circle"<<endl;
    }
};

class rectangle: public shape{
    public:
    float length,width;

    void input() {
        cout << "Enter length and width of rectangle: ";
        cin >> length >> width;
    }

    void area() override{
        cout<<" area of rectangle is"<< length*width<<endl;
    }

    void display() override {
        cout << "Shape: Rectangle"<<endl;
    }
};

class triangle: public shape{
    public:
    float base,height;
    void input() {
        cout << "Enter base and height of triangle: ";
        cin >> base >> height;
    }
    
     void area() override{
        cout<<" area of triangle is"<< (base*height)/2<<endl;
    }

    void display() override {
        cout << "Shape: Triangle"<<endl;
    }
};

int main(){
 circle c;
 rectangle r;
 triangle t;

 c.input();
 c.display();
 c.area();

    r.input();
    r.display();
    r.area();

    t.input();
    t.display();
    t.area();

    return 0;

}