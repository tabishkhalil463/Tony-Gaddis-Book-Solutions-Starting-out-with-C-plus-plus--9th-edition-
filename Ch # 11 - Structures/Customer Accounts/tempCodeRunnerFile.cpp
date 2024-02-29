#include<iostream>
#include<string>
using namespace std;

const int SIZE=2;
struct CustomerAccounts
{
    string name;
    string city;
    string state;
    int zip;
    string telephoneNum;
    double balance;
    char dateOfLastPayment[30];
};
void display(CustomerAccounts cA[])
{
    for(int i=0;i<SIZE;i++)
    {
        cout<<"Details of Customer "<<i+1<<" : "<<endl;
        cout<<"Name of the Customer = "<<cA[i].name<<endl;
        cout<<"Address of the Customer : "<<endl;
        cout<<"State = "<<cA[i].state<<endl;
        cout<<"City = "<<cA[i].city<<endl;
        cout<<"Zip number = "<<cA[i].zip<<endl;
        cout<<"Telephone number = "<<cA[i].telephoneNum<<endl;
        cout<<"Account Balance = "<<cA[i].balance<<endl;
        cout<<"Date of Last Payment = "<<cA[i].dateOfLastPayment<<endl;
        cout<<endl;
    }
}
int main()
{
    CustomerAccounts ca[SIZE];
     double bal;

    for(int i=0;i<SIZE;i++)
    {
        cout<<"Enter the details of customer "<<i+1<<" : "<<endl;
        cout<<"Enter the name of Customer = ";
        cin>>ca[i].name;
        cout<<"Enter the address of Customer : "<<endl;
        cout<<"Enter the state = ";
        cin>>ca[i].state;
        cout<<"Enter the city = ";
        cin>>ca[i].city;
        cout<<"Enter the zip number = ";
        cin>>ca[i].zip;
        cout<<"Enter the telephone number = ";
        cin>>ca[i].telephoneNum;
        cout<<"Enter the account balance = ";
        cin>>bal;
        while(bal<0)
        {
            cout<<"Invalid Input ! Plz enter (>0) balance = ";
            cin>>bal;
        }
        ca[i].balance=bal;
        cout<<"Enter the date of last payment (dd-mm-yyyy) = ";
        cin>>ca[i].dateOfLastPayment;
        cout<<endl;
    }
cout<<"Here are the details of Customer Accounts : "<<endl;
cout<<endl;
display(ca);
int numName;
cout<<"Enter the customer number whose name you want to update = ";
cin>>numName;
while(numName>0 && numName<SIZE)
{
        cout<<"Enter the updated name of Customer "<<numName<<" = ";
        cin>>ca[numName-1].name;
        cout<<"Updated Details of Customer "<<numName<<" : "<<endl;
        display(ca);
        cout<<"Enter the customer number whose name you want to update = ";
        cin>>numName;
}
if(numName==0)
{
    cout<<"Successfully Exist ! "<<endl;
}
int numAddress;
cout<<"Enter the customer number whose address you want to update = ";
cin>>numAddress;
while(numAddress>0 && numAddress<SIZE)
{
        cout<<"Enter the updated address of Customer "<<numAddress<<" : "<<endl;
        cout<<"Enter the state = ";
        cin>>ca[numAddress-1].state;
        cout<<"Enter the city = ";
        cin>>ca[numAddress-1].city;
        cout<<"Enter the zip number = ";
        cin>>ca[numAddress-1].zip;
        cout<<"Updated Details of Customer "<<numAddress<<" : "<<endl;
        display(ca);
        cout<<"Enter the customer number whose address you want to update = ";
        cin>>numAddress;
}
if(numAddress==0)
{
    cout<<"Successfully Exist ! "<<endl;
}
int numPhone;
cout<<"Enter the customer number whose phone number you want to update = ";
cin>>numPhone;
while(numPhone>0 && numPhone<SIZE)
{
    cout<<"Enter the updated Telephone number of Customer "<<numPhone<<" = ";
    cin>>ca[numPhone-1].telephoneNum;
    cout<<"Updated Details of Customer "<<numPhone<<" : "<<endl;
    display(ca);
    cout<<"Enter the customer number whose phone number you want to update = ";
    cin>>numPhone;
}
if(numPhone==0)
{
    cout<<"Successfully Exist ! "<<endl;
}
int numBal;
cout<<"Enter the customer number whose Balance you want to update = ";
cin>>numBal;
while(numBal>0 && numBal<SIZE)
{
    cout<<"Enter the updated balance of Customer "<<numBal<<" = ";
    cin>>bal;
    while(bal<0)
    {
        cout<<"Invalid Input ! Plz enter (>0) balance = ";
        cin>>bal;
    }
    ca[numBal-1].balance=bal;
    cout<<"Updated Details of Customer "<<numBal<<" : "<<endl;
    display(ca);
    cout<<"Enter the customer number whose Balance you want to update = ";
    cin>>numBal;
}
if(numBal==0)
{
    cout<<"Successfully Exist ! "<<endl;
}
int numDate;
cout<<"Enter the customer number whose date of last payment you want to update = ";
cin>>numDate;
while(numDate>0 && numDate<SIZE)
{
    cout<<"Enter the updated date of Customer "<<numDate<<" = ";
    cin>>ca[numDate-1].dateOfLastPayment;
    cout<<"Updated Details of Customer "<<numDate<<" : "<<endl;
    display(ca);
    cout<<"Enter the customer number whose date of last payment you want to update = ";
    cin>>numDate;
}
if(numDate==0)
{
    cout<<"Successfully Exist ! "<<endl;
}
return 0;
}