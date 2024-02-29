#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

const int numOfMonths=3;
const int numOfDays=30;

void countDays(char arr[][numOfDays],int monthIndex,int& rainyDays,int& cloudyDays,int& sunnyDays)
{
    rainyDays=0;
    cloudyDays=0;
    sunnyDays=0;
    for(int i=0;i<numOfDays;i++)
    {
        if(arr[monthIndex][i]=='R')
        rainyDays++;
        else if (arr[monthIndex][i]=='C')
        cloudyDays++;
        else if (arr[monthIndex][i]=='S')
        sunnyDays++;
    }
}

int main()
{
   
    char weather[numOfMonths][numOfDays];
    int rainyDays[numOfMonths]={0};
    int cloudyDays[numOfMonths]={0};
    int sunnyDays[numOfMonths]={0};
    int totalRainyDays=0;
    int totalCloudyDays=0;
    int totalSunnyDays=0;
    int maxRainyMonth=0;

    ifstream inputfile("RainOrShine.txt");
    if(!inputfile)
    {
        cerr<<"Unable to open input file :"<<endl;
        return 1;
    }
    for(int i=0;i<numOfMonths;i++)
    {
        for(int j=0;j<numOfDays;j++)
        {
            inputfile>>weather[i][j];
        }
    }
inputfile.close();
for(int i=0;i<numOfMonths;i++)
{
countDays(weather,i,rainyDays[i],cloudyDays[i],sunnyDays[i]);
totalRainyDays+=rainyDays[i];
totalCloudyDays+=cloudyDays[i];
totalSunnyDays+=sunnyDays[i];
if(rainyDays[i]>rainyDays[maxRainyMonth])
    maxRainyMonth=i;
}
cout << "Weather Report: " << endl;
for(int i = 0; i < numOfMonths; i++) 
{
    cout << "Month " << i + 1 << " has " << rainyDays[i] << " rainy days, " << cloudyDays[i] << " cloudy days, and " << sunnyDays[i] << " sunny days." << endl;
}
cout << "Total: " << totalRainyDays << " rainy days, " << totalCloudyDays << " cloudy days, and "<< totalSunnyDays << " sunny days." << endl;
cout << "Rainiest Month is " << maxRainyMonth + 1 << endl;

 return 0;
}