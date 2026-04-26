#include<iostream>
using namespace std;

class polygon{
    protected:
    int width, height;

    public:
    void setvalues(int a, int b){
        width = a;
        height = b;
    }
};

class rectangle: public polygon{
    public:
    int area(){
        return width * height;
    }
};

class triangle: public polygon{
    public:
    int area(){
        return (width * height) / 2;
    }
};

int main(){
    rectangle rect;
    triangle tri;

    int w,h;
    cout << "Enter width and height: ";
    cin >> w >> h;
    rect.setvalues(w, h);
    tri.setvalues(w, h);

    cout << "Area of Rectangle: " << rect.area() << endl;

    cout << "Area of Triangle: " << tri.area() << endl;

    return 0;
}
