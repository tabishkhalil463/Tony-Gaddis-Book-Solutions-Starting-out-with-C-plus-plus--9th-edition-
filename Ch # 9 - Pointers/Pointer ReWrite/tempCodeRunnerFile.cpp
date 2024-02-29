#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
using namespace std;

/* int doSomething(int &x,int &y)
{
    int temp=x;
    x=y*10;
    y=temp*10;
    return x+y;
}
int main()
{
    int x;
    cout<<"Enter the value of x = ";
    cin>>x;
    int y;
    cout<<"Enter the value of y = ";
    cin>>y;
    int sum=doSomething(x,y);
    cout<<"Sum ="<<sum<<endl;

 return 0;
} */
int doSomething(int *x,int *y)
{
    int temp=*x;
    *x=*y*10;
    *y=temp*10;
    return *x+*y;
}
int main()
{
    int x;
    cout<<"Enter the value of x = ";
    cin>>x;
    int y;
    cout<<"Enter the value of y = ";
    cin>>y;
    int sum=doSomething(&x,&y);
    cout<<"Sum ="<<sum<<endl;

 return 0;
}