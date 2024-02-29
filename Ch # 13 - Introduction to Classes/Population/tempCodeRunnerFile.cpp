#include <iostream>
using namespace std;

class Population
{
private:
    double population;
    double numOfBirths;
    double numOfDeaths;

public:
    void setPopulation(double p)
    {
        population = p;
    }
    double getPopulation() const
    {
        return population;
    }
    void setNumOfBirths(double numB)
    {
        numOfBirths = numB;
    }
    void setNumOfDeaths(double numD)
    {
        numOfDeaths = numD;
    }
    double getNumOfBirths() const
    {
        return numOfBirths;
    }
    double getNumOfDeaths() const
    {
        return numOfDeaths;
    }
    void birthRate()
    {
        double birthrate;
        birthrate = numOfBirths / population;
        cout << "Birth rate = " << birthrate << endl;
    }
    void deathRate()
    {
        double deathrate;
        deathrate = numOfDeaths / population;
        cout << "Beathrate = " << deathrate << endl;
    }
};
int main()
{
    Population pop;
    double popul;
    cout << "Enter the population = ";
    cin >> popul;
    while (popul < 1)
    {
        cout << "Invalid population number entered Plz enter (>1)= ";
        cin >> popul;
    }
    pop.setPopulation(popul);

    double num;
    cout << "Enter the number of births = ";
    cin >> num;
    while (num < 0)
    {
        cout << "Invalid birth number entered Plz entere (>0) = ";
        cin >> num;
    }
    pop.setNumOfBirths(num);

    double n;
    cout << "Enter the number of deaths = ";
    cin >> n;
    while (n < 0)
    {
        cout << "Invalid death number entered Plz entere (>0) = ";
        cin >> n;
    }
    pop.setNumOfDeaths(n);

    cout << endl;

    cout << "Number of births = " << pop.getNumOfBirths() << endl;
    cout << "Number of deaths = " << pop.getNumOfDeaths() << endl;

    pop.birthRate();
    pop.deathRate();

    return 0;
}