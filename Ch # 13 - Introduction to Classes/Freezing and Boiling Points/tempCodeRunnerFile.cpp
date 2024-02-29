#include <iostream>
using namespace std;

class Temperature
{
private:
    double temperature;

public:
    Temperature()
    {
        temperature = 0.0;
    }
    void setTemperature(double t)
    {
        temperature = t;
    }
    double getTemperature() const
    {
        return temperature;
    }
    bool isEthyFreezing()
    {
        if (temperature <= -173)
            return true;
        else
            return false;
    }
    bool isEthylBoiling()
    {
        if (temperature >= 172)
            return true;
        else
            return false;
    }
    bool isOxygenFreezing()
    {
        if (temperature <= -362)
            return true;
        else
            return false;
    }
    bool isOxygenBoiling()
    {
        if (temperature >= -306)
            return true;
        else
            return false;
    }
    bool isWaterFreezing()
    {
        if (temperature <= 32)
            return true;
        else
            return false;
    }
    bool isWaterBoiling()
    {
        if (temperature >= 212)
            return true;
        else
            return false;
    }
    void display()
    {
        if (isEthyFreezing())
            cout << "Ethyl Freezes " << endl;
        if (isEthylBoiling())
            cout << "Ethyl Boils " << endl;
        if (isOxygenFreezing())
            cout << "Oxygen Freezing " << endl;
        if (isOxygenBoiling())
            cout << "Oxygen Boils " << endl;
        if (isWaterFreezing())
            cout << "Water Freezes" << endl;
        if (isWaterBoiling())
            cout << "Water Boils " << endl;
    }
};
int main()
{
    Temperature temp;
    double temperature;
    cout << "Enter the Temperature = ";
    cin >> temperature;
    temp.setTemperature(temperature);
    temp.display();

    return 0;
}