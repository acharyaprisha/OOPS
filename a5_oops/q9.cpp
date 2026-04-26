#include <iostream>
using namespace std;

class vehicle{
public:
    string comp;
    void inputvehicle() {
        cout << "enter vehicle company: ";
        cin >> comp;
    }
};

class truck : public vehicle{
public:
    int capacity;
    void inputtruck() {
        inputvehicle();
        cout << "Enter truck capacity (tons): ";
        cin >> capacity;
    }
};

class refrigeratedTruck : public truck{
public:
    int temp;
    void inputRefrigeratedTruck() {
        inputtruck();
        cout << "Enter temperature: ";
        cin >> temp;
    }

    void display() {
        cout << "company: " << comp << endl;
        cout << "capacity: " << capacity  << endl;
        cout << "temperature: " << temp  << endl;
    }
};

int main(){
    refrigeratedTruck r;
    r.inputRefrigeratedTruck();
    r.display();

    return 0;
}