#include<iostream>
#include<iomanip>

using namespace std;

const int rows=3;
const int columns=3;

void check(int nums[][columns])
{
    int rowOneCount=0;
    int sumOfRowOne=0;
    for(int j=0;j<3;j++)
    {
        sumOfRowOne+=nums[rowOneCount][j];
    }
    cout<<"Sum of first row = "<<sumOfRowOne<<endl;
    int rowTwoCount=1;
    int sumOfRowTwo=0;
    for(int j=0;j<3;j++)
    {
        sumOfRowTwo+=nums[rowTwoCount][j];
    }
    cout<<"Sum of second row = "<<sumOfRowTwo<<endl;
    int rowThreeCount=2;
    int sumOfRowThree=0;
    for(int j=0;j<3;j++)
    {
        sumOfRowThree+=nums[rowThreeCount][j];
    }
    cout<<"Sum of third row = "<<sumOfRowThree<<endl;

    int columnOneCount=0;
    int sumOfColumnOne=0;
    for(int j=0;j<rows;j++)
    {
        sumOfColumnOne+=nums[columnOneCount][j];
    }
    cout<<"Sum of column one = "<<sumOfColumnOne<<endl;
    int columnTwoCount=1;
    int sumOfColumnTwo=0;
    for(int j=0;j<rows;j++)
    {
        sumOfColumnTwo+=nums[columnTwoCount][j];
    }
    cout<<"Sum of column two = "<<sumOfColumnTwo<<endl;
    int columnThreeCount=2;
    int sumOfColumnThree=0;
    for(int j=0;j<rows;j++)
    {
        sumOfColumnThree+=nums[columnThreeCount][j];
    }
    cout<<"Sum of column three = "<<sumOfColumnThree<<endl;

    int sumOfLeftDiagnol=0;
    for(int i=0;i<rows && i<columns;i++)
    {
        sumOfLeftDiagnol+=nums[i][i];
    }
    cout<<"Sum of left diagnol = "<<sumOfLeftDiagnol<<endl;
    int sumOfRightDiagnol=0;
    int i=0;
    for(int j=columns-1;j>=0;j--)
    {
        sumOfRightDiagnol+=nums[i][j];
        i++;
    }
    cout<<"Sum of right diagonal = "<<sumOfRightDiagnol<<endl;

    if(sumOfRowOne==sumOfRowTwo && sumOfRowOne==sumOfRowThree && sumOfColumnOne==sumOfColumnTwo && sumOfColumnOne==sumOfColumnThree && sumOfLeftDiagnol==sumOfRightDiagnol)
    {
        cout<<"It is Lo Shu Magic Square "<<endl;
    }
    else
        cout<<"It is not a Lo Shu Magic Square "<<endl;
}

int main()
{
    int arr[rows][columns];
    bool numberUsed[9] = {false};

    cout<<"Enter the values in Lo Shu Magic Square :"<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            int count;
            cout<<"Enter the number at row number "<<i+1<<" and column number "<<j+1<<" = ";
            cin>>count;
            while(count > 9 || count == 0 || numberUsed[count-1])
            {
                cout<<"Invalid input Plz enter a non-repeated number between 1-9 = ";
                cin>>count;
            }
            numberUsed[count - 1] = true;
            arr[i][j]=count;
        }
        cout<<endl;
    }
cout<<"Numbers in Lo Shu Magic Square are : "<<endl;
for(int i=0;i<rows;i++)
{
    for(int j=0;j<columns;j++)
    {
        cout<<arr[i][j]<<"  ";
    }
    cout<<endl;
}
check(arr);
 return 0;
}