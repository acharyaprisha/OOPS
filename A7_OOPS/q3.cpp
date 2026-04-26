#include<iostream>
using namespace std;
#include<math.h>

float area(float b, float h){
    return (b*h)/2;
}

float area(float s){
    return (sqrt(3)/4)*s*s;
}

float area(float a, float b, float c){
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main(){
    float B, H, side, a, b, c;
    
    cout << "Enter base and height for right angled triangle: ";
    cin >> B>> H;
    cout << "Area of Right Angled Triangle: " << area(B, H) << endl;

    cout << "Enter side of equilateral triangle: ";
    cin >> side;
    cout << "Area of Equilateral Triangle: " << area(side) << endl;

    cout << "Enter sides of isosceles triangle: ";
    cin >> a >> b >> c;
    cout << "Area of  Isosceles Triangle: " << area(a, b, c) << endl;

    return 0;
}