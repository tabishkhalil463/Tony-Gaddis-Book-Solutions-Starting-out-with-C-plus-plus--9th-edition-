/* #include<iostream>
#include<string>
using namespace std;

struct CorporateSalesData
{
    string divisionName;
    float firstQuarterSales;
    float secondQuarterSales;
    float thirdQuarterSales;
    float fourthQuarterSales;
    float totalAnnualSales;
    float averageQuarterlySales;

};

int main()
{
    CorporateSalesData csd1,csd2,csd3,csd4;

    csd1.divisionName="East";

    cout<<"Enter the first quarter sales of "<<csd1.divisionName<<" = ";
    cin>>csd1.firstQuarterSales;

    while(csd1.firstQuarterSales<=0)
    {
        cout<<"Invalid Input! Plz enter (>0) sales figures = ";
        cin>>csd1.firstQuarterSales;
    }

    cout<<"Enter the second quarter sales of "<<csd1.divisionName<<" = ";
    cin>>csd1.secondQuarterSales;

    while(csd1.secondQuarterSales<=0)
    {
        cout<<"Invalid Input! Plz enter (>0) sales figures = ";
        cin>>csd1.secondQuarterSales;
    }

    cout<<"Enter the third quarter sales of "<<csd1.divisionName<<" = ";
    cin>>csd1.thirdQuarterSales;

    while(csd1.thirdQuarterSales<=0)
    {
        cout<<"Invalid Input! Plz enter (>0) sales figures = ";
        cin>>csd1.thirdQuarterSales;
    }

    cout<<"Enter the fourth quarter sales of "<<csd1.divisionName<<" = ";
    cin>>csd1.fourthQuarterSales;

    while(csd1.fourthQuarterSales<=0)
    {
        cout<<"Invalid Input! Plz enter (>0) sales figures = ";
        cin>>csd1.fourthQuarterSales;
    }

    csd1.totalAnnualSales=csd1.firstQuarterSales+csd1.secondQuarterSales+csd1.thirdQuarterSales+csd1.fourthQuarterSales;
    csd1.averageQuarterlySales=csd1.totalAnnualSales/4;

    csd2.divisionName="West";
    
    cout<<"Enter the first quarter sales of "<<csd2.divisionName<<" = ";
    cin>>csd2.firstQuarterSales;

    while(csd2.firstQuarterSales<=0)
    {
        cout<<"Invalid Input! Plz enter (>0) sales figures = ";
        cin>>csd2.firstQuarterSales;
    }

    cout<<"Enter the second quarter sales of "<<csd2.divisionName<<" = ";
    cin>>csd2.secondQuarterSales;

    while(csd2.secondQuarterSales<=0)
    {
        cout<<"Invalid Input! Plz enter (>0) sales figures = ";
        cin>>csd2.secondQuarterSales;
    }

    cout<<"Enter the third quarter sales of "<<csd2.divisionName<<" = ";
    cin>>csd2.thirdQuarterSales;

    while(csd2.thirdQuarterSales<=0)
    {
        cout<<"Invalid Input! Plz enter (>0) sales figures = ";
        cin>>csd2.thirdQuarterSales;
    }

    cout<<"Enter the fourth quarter sales of "<<csd2.divisionName<<" = ";
    cin>>csd2.fourthQuarterSales;

    while(csd2.fourthQuarterSales<=0)
    {
        cout<<"Invalid Input! Plz enter (>0) sales figures = ";
        cin>>csd2.fourthQuarterSales;
    }

    csd2.totalAnnualSales=csd2.firstQuarterSales+csd2.secondQuarterSales+csd2.thirdQuarterSales+csd2.fourthQuarterSales;
    csd2.averageQuarterlySales=csd2.totalAnnualSales/4;

    csd3.divisionName="North";

    cout<<"Enter the first quarter sales of "<<csd3.divisionName<<" = ";
    cin>>csd3.firstQuarterSales;

    while(csd3.firstQuarterSales<=0)
    {
        cout<<"Invalid Input! Plz enter (>0) sales figures = ";
        cin>>csd3.firstQuarterSales;
    }

    cout<<"Enter the second quarter sales of "<<csd3.divisionName<<" = ";
    cin>>csd3.secondQuarterSales;

    while(csd3.secondQuarterSales<=0)
    {
        cout<<"Invalid Input! Plz enter (>0) sales figures = ";
        cin>>csd3.secondQuarterSales;
    }

    cout<<"Enter the third quarter sales of "<<csd3.divisionName<<" = ";
    cin>>csd3.thirdQuarterSales;

    while(csd3.thirdQuarterSales<=0)
    {
        cout<<"Invalid Input! Plz enter (>0) sales figures = ";
        cin>>csd3.thirdQuarterSales;
    }

    cout<<"Enter the fourth quarter sales of "<<csd3.divisionName<<" = ";
    cin>>csd3.fourthQuarterSales;

    while(csd3.fourthQuarterSales<=0)
    {
        cout<<"Invalid Input! Plz enter (>0) sales figures = ";
        cin>>csd3.fourthQuarterSales;
    }
    
    csd3.totalAnnualSales=csd3.firstQuarterSales+csd3.secondQuarterSales+csd3.thirdQuarterSales+csd3.fourthQuarterSales;
    csd3.averageQuarterlySales=csd3.totalAnnualSales/4;

    csd4.divisionName="South";

    cout<<"Enter the first quarter sales of "<<csd4.divisionName<<" = ";
    cin>>csd4.firstQuarterSales;

    while(csd4.firstQuarterSales<=0)
    {
        cout<<"Invalid Input! Plz enter (>0) sales figures = ";
        cin>>csd4.firstQuarterSales;
    }

    cout<<"Enter the second quarter sales of "<<csd4.divisionName<<" = ";
    cin>>csd4.secondQuarterSales;

    while(csd4.secondQuarterSales<=0)
    {
        cout<<"Invalid Input! Plz enter (>0) sales figures = ";
        cin>>csd4.secondQuarterSales;
    }

    cout<<"Enter the third quarter sales of "<<csd4.divisionName<<" = ";
    cin>>csd4.thirdQuarterSales;

    while(csd4.thirdQuarterSales<=0)
    {
        cout<<"Invalid Input! Plz enter (>0) sales figures = ";
        cin>>csd4.thirdQuarterSales;
    }

    cout<<"Enter the fourth quarter sales of "<<csd4.divisionName<<" = ";
    cin>>csd4.fourthQuarterSales;

    while(csd4.fourthQuarterSales<=0)
    {
        cout<<"Invalid Input! Plz enter (>0) sales figures = ";
        cin>>csd4.fourthQuarterSales;
    }

    csd4.totalAnnualSales=csd4.firstQuarterSales+csd4.secondQuarterSales+csd4.thirdQuarterSales+csd4.fourthQuarterSales;
    csd4.averageQuarterlySales=csd4.totalAnnualSales/4;

    cout<<"Total annual sales of "<<csd1.divisionName<<" is = "<<csd1.totalAnnualSales<<endl;
    cout<<"Average Sales of "<<csd1.divisionName<<" is = "<<csd1.averageQuarterlySales<<endl;

    cout<<"Total annual sales of "<<csd2.divisionName<<" is = "<<csd2.totalAnnualSales<<endl;
    cout<<"Average Sales of "<<csd2.divisionName<<" is = "<<csd2.averageQuarterlySales<<endl;

    cout<<"Total annual sales of "<<csd3.divisionName<<" is = "<<csd3.totalAnnualSales<<endl;
    cout<<"Average Sales of "<<csd3.divisionName<<" is = "<<csd3.averageQuarterlySales<<endl;

    cout<<"Total annual sales of "<<csd4.divisionName<<" is = "<<csd4.totalAnnualSales<<endl;
    cout<<"Average Sales of "<<csd4.divisionName<<" is = "<<csd4.averageQuarterlySales<<endl;

 return 0;
} */
/* 
#include <iostream>
#include <string>
using namespace std;

struct CorporateSalesData 
{
    string divisionName;
    float quarterSales[4];
    float totalAnnualSales;
    float averageQuarterlySales;
};

void inputSales(CorporateSalesData& division) 
{
    for (int i = 0; i < 4; ++i) 
    {
        float sales;
        cout << "Enter the sales for quarter " << i + 1 << " of " << division.divisionName << ": ";
        cin >> sales;
        while (sales <= 0) 
        {
            cout << "Invalid input! Please enter a value greater than 0: ";
            cin >> sales;
        }
        division.quarterSales[i] = sales;
    }
}

void calculateTotals(CorporateSalesData& division) 
{
    division.totalAnnualSales = 0;
    for (int i = 0; i < 4; ++i) 
    {
        division.totalAnnualSales += division.quarterSales[i];
    }
    division.averageQuarterlySales = division.totalAnnualSales / 4;
}

void printResults(const CorporateSalesData& division)
{
    cout << "Total annual sales of " << division.divisionName << " is: " << division.totalAnnualSales << endl;
    cout << "Average sales of " << division.divisionName << " is: " << division.averageQuarterlySales << endl;
}

int main() 
{
    CorporateSalesData divisions[] = { {"East"}, {"West"}, {"North"}, {"South"} };

    for (CorporateSalesData& division : divisions) 
    {
        inputSales(division);
        calculateTotals(division);
        printResults(division);
    }
    return 0;
}
   */  
