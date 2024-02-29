#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
using namespace std;

const int MONTHS_NUMBER=12;
const int MONTH_DAYS=30;
const float MIN_TEMPERATURE = -100.0;
const float MAX_TEMPERATURE = 140.0;

struct Weather
{
float rainfall;
float highTemperature;
float lowTemperature;
float averageTemperature;

};

int main()
{
Weather w[MONTHS_NUMBER];

cout<<"Enter the data for each month:"<<endl;
for(int i=0;i<MONTHS_NUMBER;i++)
{
    cout<<"Enter the total rainfall occured in "<<i+1<<" month = ";
    cin>>w[i].rainfall;
    cout<<"Enter the high temperature of "<<i+1<<" month = ";
    cin>>w[i].highTemperature;
     while (w[i].highTemperature < MIN_TEMPERATURE || w[i].highTemperature > MAX_TEMPERATURE)
        {
            cout << "Invalid input! Temperature must be within the range -100 to 140 degrees Fahrenheit." << endl;
            cout << "Enter the high temperature of " << i + 1 << " month: ";
            cin >> w[i].highTemperature;
        }
    cout<<"Enter the low temperature of "<<i+1<<" month = ";
    cin>>w[i].lowTemperature;

     while (w[i].lowTemperature < MIN_TEMPERATURE || w[i].lowTemperature > MAX_TEMPERATURE)
        {
            cout << "Invalid input! Temperature must be within the range -100 to 140 degrees Fahrenheit." << endl;
            cout << "Enter the low temperature of " << i + 1 << " month: ";
            cin >> w[i].lowTemperature;
        }
    float sum=0;
for(int j=0;j<MONTH_DAYS;j++)
{
    float temp;
    cout<<"Enter the temperature of Day "<<j+1<<" of month "<<i+1<<" is = ";
    cin>>temp;
      while (temp < MIN_TEMPERATURE || temp > MAX_TEMPERATURE)
            {
                cout << "Invalid input! Temperature must be within the range -100 to 140 degrees Fahrenheit." << endl;
                cout << "Enter the temperature of Day " << j + 1 << " is = ";
                cin >> temp;
            }
    sum+=temp;
}
    w[i].averageTemperature=sum/MONTH_DAYS;
    cout<<"Average Temperature of month "<<i+1<<" is = "<<w[i].averageTemperature<<endl;
}
float totalRainFall=0;
for(int i=0;i<MONTHS_NUMBER;i++)
{
totalRainFall+=w[i].rainfall;
}
cout<<"Total Rainfall for the year is = "<<totalRainFall<<endl;
float averageMonthlyRainfall=totalRainFall/MONTHS_NUMBER;
cout<<"Average monthly Rainfall is = "<<averageMonthlyRainfall<<endl;
float high;
int highMonthName=0;
high=w[0].highTemperature;
for(int i=1;i<MONTHS_NUMBER;i++)
{
    if(w[i].highTemperature>high)
    {
        high=w[i].highTemperature;
        highMonthName=i;
    }
}
cout<<"Highest Temperature for the year is = "<<high<<" and the month in which it occures is = "<<highMonthName+1<<endl;
float low;
int lowMonthName=0;
low=w[0].lowTemperature;
for(int i=1;i<MONTHS_NUMBER;i++)
{
    if(w[i].lowTemperature<low)
    {
        low=w[i].lowTemperature;
        lowMonthName=i;
    }
}
cout<<"Lowest Temperature for the year is = "<<low<<" and the month in which it occures is = "<<lowMonthName+1<<endl;
float sumAverageMonthlyTemperature=0;
for(int i=0;i<MONTHS_NUMBER;i++)
{
    sumAverageMonthlyTemperature+=w[i].averageTemperature;
}
float totalAverageMonthlyTemperature;
totalAverageMonthlyTemperature=sumAverageMonthlyTemperature/MONTHS_NUMBER;
cout<<"Average of all average of all monthly average temperature is = "<<totalAverageMonthlyTemperature<<endl;
return 0;
}