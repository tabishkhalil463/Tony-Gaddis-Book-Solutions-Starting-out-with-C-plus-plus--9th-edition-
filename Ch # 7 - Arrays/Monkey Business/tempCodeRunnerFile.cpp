#include<iostream>
#include<iomanip>
using namespace std;




int main()
{
    const int numOfMonkeys=3;
    const int numOfDays=5;
    int arr[numOfMonkeys][numOfDays];

    while(arr[numOfMonkeys][numOfDays]<0)
    {
        cout<<"Invalid input : Plz enter the correct value of food eaten by monkey = ";
        cin>>arr[numOfMonkeys][numOfDays];
    }
    for(int i=0;i<numOfMonkeys;i++)
    {
        for(int j=0;j<numOfDays;j++)
        {
            int pounds;
            cout << "Enter the pounds of food eaten by monkey " << i + 1 << " on day " << j + 1 << " of the week = ";
            cin >> pounds;
            while (pounds < 0) 
            {
                cout << "Invalid input Please enter a non-negative number of pounds = ";
                cin >> pounds;
            }
            arr[i][j] = pounds;
        }
        cout<<endl;
    }
    cout<<"Here is report: "<<endl;
    double average;
    int total=0;
    for(int i=0;i<numOfMonkeys;i++)
    {
        for(int j=0;j<numOfDays;j++)
        {
            total+=arr[i][j];
        }
    }   
    average=static_cast<double>(total)/(numOfDays);
    cout<<"Average amount of food in pounds eaten per day by the whole family of monkeys is = "<<average<<endl;
    int lowest=arr[0][0];
    for(int i=0;i<numOfMonkeys;i++)
    {
        for(int j=0;j<numOfDays;j++)
        {
            if(arr[i][j]<lowest)
            {
                lowest=arr[i][j];
            }
        }
    }
    cout<<"The least amount of food eaten during the week by any one of the monkey is = "<<lowest<<endl;
    int highest=arr[0][0];
    for(int i=0;i<numOfMonkeys;i++)
    {
        for(int j=0;j<numOfDays;j++)
        {
            if(arr[i][j]>highest)
            {
                highest=arr[i][j];
            }
        }
    }
    cout<<"The highest amount of food eaten during the week by any one of the monkey is = "<<highest<<endl;

 return 0;
}