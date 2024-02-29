#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
using namespace std;

void displayOriginalArray(int *donate,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<*donate<<" ";
        donate++;
        //cout<<donate[i]<<" ";
    }
    cout<<endl;
}
void sort(int *donate[],int size)
{
    int maxElement;
    for(maxElement=size-1;maxElement>0;maxElement--)
    {
        {
            for(int i=0;i<maxElement;i++)
            {
                if(*(donate[i])<*(donate[i+1])) 
                {              
                    swap(donate[i],donate[i+1]);
                }
            }
        }
    }
    cout<<endl;
}
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
} 
void displaySortedArray(int*arrPtr[],int size)
{
 for(int i=0;i<size;i++)
    {
        cout<<*(arrPtr[i])<<" ";
    }
}
int main()
{
    int size;
    cout<<"Enter the number of donations in an array = ";
    cin>>size;
    int * donations=nullptr;
    donations=new int[size];

    cout<<"Enter the values in donation array :"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the donation value at index "<<i+1<<" = ";
        cin>>donations[i];
    }
    int *arrPtr[size]={nullptr};
    for(int i=0;i<size;i++)
    {
        arrPtr[i]=&donations[i];
    }
    sort(arrPtr,size);

    cout<<"Donations in the Deassending order = ";
    displaySortedArray(arrPtr,size);
    cout<<endl;
    cout<<"Donations in original order = " ;
    displayOriginalArray(donations,size);

    delete []donations;
    donations=nullptr;
    
return 0;
}
                