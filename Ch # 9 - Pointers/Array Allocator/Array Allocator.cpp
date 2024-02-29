#include<iostream>
using namespace std;

 int*display(int s){
    int*array=nullptr;
    array=new int[s];
    cout<<"Enter the elements in an array:"<<endl;
    for(int i=0;i<s;i++)
    {
        cout<<"Element at index ["<<i<<"] is = ";
     cin>>array[i];
    } 
    cout<<"Elements are = ";
    for(int i=0;i<s;i++){
     cout<<array[i]<<" ";
}
 return array;
}
int main()
{
int size;
cout<<"Enter the size of array = ";
cin>>size;
int*result=nullptr;
result=display(size);
delete[]result;
result=nullptr;

 return 0;
}