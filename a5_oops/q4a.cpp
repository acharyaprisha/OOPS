#include <iostream>
using namespace std;

class Animal
{
public:
    void eat(){ cout<<"eating"; }
};

class Dog : public Animal
{
public:
    void bark(){ cout<<"barking"; }
};

int main()
{
    Dog d;
    d.eat();
    d.bark();
}
