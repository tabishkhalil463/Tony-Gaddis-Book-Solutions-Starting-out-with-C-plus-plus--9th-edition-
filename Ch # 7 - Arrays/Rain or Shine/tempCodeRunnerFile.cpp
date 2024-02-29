#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

const int numOfMonths=3;
const int numOfDays=30;

void countDays(char arr[][numOfDays],int monthIndex,int& rainyCounts,int& cloudyCounts,int& sunnyCounts)
{
    rainyCounts=0;
    cloudyCounts=0;
    sunnyCounts=0;
    for(int i=0;i<numOfDays;i++)
    {
        if(arr[monthIndex][i]=='R')
        rainyCounts++;
        else if (arr[monthIndex][i]=='C')
        cloudyCounts++;
        else if (arr[monthIndex][i]=='S')
        sunnyCounts++;
    }
}

int main()
{
   
    char weather[numOfMonths][numOfDays];
    int rainyCounts[numOfMonths]={0};
    int cloudyCounts[numOfMonths]={0};
    int sunnyCounts[numOfMonths]={0};
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
countDays(weather,i,rainyCounts[i],cloudyCounts[i],sunnyCounts[i]);
totalRainyDays+=rainyCounts[i];
totalCloudyDays+=cloudyCounts[i];
totalSunnyDays+=sunnyCounts[i];
if(rainyCounts[i]>rainyCounts[maxRainyMonth])
    maxRainyMonth=i;
}
cout << "Weather Report: " << endl;
for(int i = 0; i < numOfMonths; i++) 
{
    cout << "Month " << i + 1 << " has " << rainyCounts[i] << " rainy days, " << cloudyCounts[i] << " cloudy days, and " << sunnyCounts[i] << " sunny days." << endl;
}
cout << "Total: " << totalRainyDays << " rainy days, " << totalCloudyDays << " cloudy days, and "<< totalSunnyDays << " sunny days." << endl;
cout << "Rainiest Month is " << maxRainyMonth + 1 << endl;

 return 0;
}