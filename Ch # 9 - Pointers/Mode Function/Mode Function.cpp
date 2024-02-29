#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
using namespace std;


int mode(int* a,int size)
{
    int temp;
    for(int i=0;i<size;i++)
    {
        temp=a[i];
        if(temp==a[j-1])
        {

        }
    for(int j=i+1;j<size;j++)
    {
        if(temp==a[j])
        {
            cout<<"The value that occurs most is = "<<temp<<endl;
        }

    }
    }
   
}

int main()
{
    const int size=5;

    int arr[size];
    cout<<"Enter the values in an array:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the value at index "<<i<<" = ";
        cin>>arr[i];
    }
    cout<<"Elements in an array = ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int t=mode(arr,size);
    cout<<"The value that occurs more than one time is "<<t<<endl;

 return 0;
}