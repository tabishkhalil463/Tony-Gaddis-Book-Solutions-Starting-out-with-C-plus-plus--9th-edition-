#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;
    double pi = 3.14159;

public:
    Circle() : radius(0.0) {}
    Circle(double r) : radius(r) {}
    void setRadius(double r)
    {
        radius = r;
    }
    double getRadius() const
    {
        return radius;
    }
    double getArea()
    {
        double area;
        area = pi * radius * radius;
        return area;
    }
    double getDiameter()
    {
        double diameter;
        diameter = radius * 2;
        return diameter;
    }
    double getCircumference()
    {
        double cirumference;
        cirumference = 2 * radius * pi;
        return cirumference;
    }
};
int main()
{
    Circle c;
    double rad;
    cout << "Enter the radius of the circle = ";
    cin >> rad;
    c.setRadius(rad);
    double a = c.getArea();
    double d = c.getDiameter();
    double cir = c.getCircumference();
    cout<<"Area = "<<a<<endl;
    cout<<"Diameter = "<<d<<endl;
    cout<<"Circumference = "<<cir<<endl;

    return 0;
}