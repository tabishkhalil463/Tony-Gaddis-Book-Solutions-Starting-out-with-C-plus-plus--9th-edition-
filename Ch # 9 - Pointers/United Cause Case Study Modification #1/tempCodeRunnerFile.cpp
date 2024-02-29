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
                if(*(donate[i])>*(donate[i+1])) 
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

    cout<<"Donations in the assending order = ";
    displaySortedArray(arrPtr,size);
    cout<<endl;
    cout<<"Donations in original order = " ;
    displayOriginalArray(donations,size);

    delete []donations;
    donations=nullptr;
    
return 0;
}
/*
The reason int* donate[] is used instead of int* donate in the function parameters is because the functions 
are dealing with arrays of pointers.

In C++, when you pass an array to a function, what actually 
gets passed is a pointer to the first element of the array.
However, if you want to pass an array of pointers, you need 
to specify that explicitly in the function parameter.

int* donate[]: This denotes an array of pointers to integers.

When you pass int* donate[] to a function, you're passing the 
address of the first element of the array of pointers.

int* donate: This denotes a pointer to an integer.

If you use int* donate as a parameter, you'd be passing just a single pointer to an integer, not an array of pointers.
*/
                