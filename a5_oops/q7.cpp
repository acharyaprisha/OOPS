#include <iostream>
using namespace std;

class Speedometer {
protected:
    float speed;

public:
    void sinput() {
        cout << "Enter speed (km/h): ";
        cin >> speed;
    }

    void showSpeed() {
        cout << "Speed: " << speed << endl;
    }
};

class FuelGauge {
protected:
    float fuel;

public:
    void finput() {
        cout << "enter fuel level: ";
        cin >> fuel;
    }

    void showFuel() {
        cout << "fuel level: " << fuel<< endl;
    }
};

class Thermometer {
protected:
    float temperature;

public:
    void tinput() {
        cout << "enter engine temperature: ";
        cin >> temperature;
    }

    void showTemperature() {
        cout << "Temperature: " << temperature << " °C" << endl;
    }
};

class CarDashboard : public Speedometer, public FuelGauge, public Thermometer {
public:
    void data() {
        sinput();
        finput();
        tinput();
    }

    void displaydashboard() {
        cout << "dashboard";
        showSpeed();
        showFuel();
        showTemperature();
    }
};

int main() {
    CarDashboard car;
    car.data();
    car.displaydashboard();
    return 0;
}