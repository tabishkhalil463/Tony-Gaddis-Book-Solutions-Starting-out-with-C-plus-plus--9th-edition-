#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;


int main()
{
    
    const int size=100;
    int arr[size];
    string filename;
    cout<<"Enter the name of the file = ";
    cin>>filename;
    ifstream file;
    file.open(filename);
    if(!file)
    {
    cerr<<"Unable to open the file !";
    return 1;
    }
    int count=0;
    while(count<size && file>>arr[count])
    {
        count++;
    }
    file.close();
    cout<<"Numbers in a file are = ";
    for(int i=0;i<count;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    if(count==0)
    {
        cout<<"File is empty ! ";
        return 1;
    }
    cout<<"Data :"<<endl;
    int lowest=arr[0];
    for(int i=0;i<count;i++)
    {
        if(arr[i]<lowest)
        lowest=arr[i];
    }
    cout<<"Lowest Number in an array is = "<<lowest<<endl;
    int highest=arr[0];
    for(int i=0;i<count;i++)
    {
        if(arr[i]>highest)
        highest=arr[i];
    }
    cout<<"Highest number in an array is = "<<highest<<endl;
    int total=0;
    for(int i=0;i<count;i++)
    {
        total+=arr[i];
    }
    cout<<"Total of the numbers in an array is = "<<total<<endl;
    double average;
    average=static_cast<double>(total)/count;
    cout<<"Average of the numbers in an array = "<<average<<endl;

 return 0;
}