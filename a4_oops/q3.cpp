#include <iostream>
using namespace std;

class Demo
{
public:
    Demo()
    {
        cout << "constructor"<<endl;
    }

    ~Demo()
    {
        cout << "destructor"<<endl;
    }
};

int main()
{
    Demo d1;
    return 0;
}
