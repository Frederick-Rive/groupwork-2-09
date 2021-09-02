#include <iostream>

using namespace std;

class Vehicle {

public:
    virtual void Display() {
        cout << "This Is A Vehicle\n";
    }
};

class Car : Vehicle {

public:
    virtual void Display() override {
        cout << "This Is A Car\n";
    }
};

class Bike : Vehicle {

public:
    virtual void Display() override {
        cout << "This Is A Bike\n";
   }
};




int main()
{
    int n = 0;
    
    cout << "Please enter the number of tyres on the vehicle";
    cin >> n;
    
    if (n == 2) {
        Bike b;        
        b.Display();
        system("PAUSE");
    } else  if (n == 4) {
        Car c;
        c.Display();
        system("PAUSE");
    } else if (n <= 1 || n <= 100) {
        Vehicle v;
        v.Display();
        system("PAUSE");
    } else
    {
        cout << "This Aint A Bloody Vehicle";
    }
    
}
