#include <iostream>
using namespace std;

class Rectangle
{
    int length, breadth;

public:
     Rectangle(int l = 0, int b = 0)
    {
        length = l;
        breadth = b;
        cout << "constructor"<<endl;
    }

    int area()
    {
        return length * breadth;
    }

    ~Rectangle()
    {
        cout << "Destructor"<<endl;
    }
};

int main()
{
    Rectangle arr[3] = {Rectangle(), Rectangle(5), Rectangle(4,6)};

    for(int i = 0; i < 3; i++)
    {
        cout << "Area of rectangle " << i+1 << " = "
             << arr[i].area() << endl;
    }

    return 0;
}
