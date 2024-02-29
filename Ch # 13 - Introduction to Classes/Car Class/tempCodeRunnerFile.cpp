#include <iostream>
using namespace std;

class Car
{
private:
    int yearModel;
    string make;
    int speed;

public:
    Car(int yM) : yearModel(yM), speed(0) {}
    int getYear() const
    {
        return yearModel;
    }
    string getMake() const
    {
        return make;
    }
    int getSpeed() const
    {
        return speed;
    }
    void accelerate()
    {
        speed += 5;
    }
    void brake()
    {
        speed -= 5;
    }
    void displayCarDetails()
    {
        cout << "Year Model = " << getYear() << endl;
    }
    void display()
    {
        cout << "Speed = " << getSpeed() <<" Km/h"<< endl;
    }
};

int main()
{
    Car c(2003);
    c.displayCarDetails();
    cout << "Initial Speed = " << c.getSpeed() <<" Km/h"<< endl;

    cout << "After acceleration : " << endl;
    for (int i = 0; i < 5; i++)
    {
        c.accelerate();
        c.display();
    }
    cout << "After applying brakes :" << endl;
    for (int i = 0; i < 5; i++)
    {
        c.brake();
        c.display();
    }

    return 0;
}