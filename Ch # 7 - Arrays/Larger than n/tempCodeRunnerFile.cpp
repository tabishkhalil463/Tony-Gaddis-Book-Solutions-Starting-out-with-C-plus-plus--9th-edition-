#include<iostream>
#include<iomanip>
using namespace std;

void display(int nums[],int size,int n)
{
    cout<<"The numbers which are greater than "<<n<<" are = ";
    for(int i=0;i<size;i++)
    {
        if(nums[i]>n)
        {
            cout<<nums[i]<<"  ";
        }
    }
    cout<<endl;
}

int main()
{
    int size;

    cout<<"Enter the size of an array = ";
    cin>>size;

    int arr[size];

    cout<<"Enter the elements in an array : "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element at index "<<i<<" = ";
        cin>>arr[i];
    }
    
    int n;

    cout<<"Enter the number = ";
    cin>>n;

    display(arr,size,n);

 return 0;
}