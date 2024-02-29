#include<iostream>
#include<string>
using namespace std;


const int SIZE=1;
struct SoccerScores
{
    string nameOfPlayer;
    int numOfPlayer;
    int points;
};
void display(const SoccerScores ss[])
{
    for(int i=0;i<SIZE;i++)
    {
        cout<<"Name of Player "<<i+1<<" = \t\t\t"<<" | "<<ss[i].nameOfPlayer<<endl;
        cout<<"Number of the Player "<<i+1<<" = \t\t"<<" | "<<ss[i].numOfPlayer<<endl;
        cout<<"Points Earned by Player "<<i+1<<" = \t\t"<<" | "<<ss[i].points<<endl;
    }
    int total=0;
    for(int i=0;i<SIZE;i++)
    {
        total+=ss[i].points;
    }
    cout<<"Total points earned by the team = \t"<<" | "<<total<<endl;
    int high;
    high=ss[0].points;
    int highNum=0;
    for(int i=1;i<SIZE;i++)
    {
        if(ss[i].points>high)
        {
            high=ss[i].points;
            highNum=i;
        }
    }
    cout<<"Highest points earned by "<<ss[highNum].nameOfPlayer<<" is = \t"<<" | "<<high<<endl;
}
int main()
{
    SoccerScores s[SIZE];
    cout<<"Enter the details of Player :"<<endl;
    for(int i=0;i<SIZE;i++)
    {
        cout<<"Enter the name of player number "<<i+1<< " = ";
        cin>>s[i].nameOfPlayer;

        int num,point;
        cout<<"Enter the number of player "<<i+1<< " = ";
        cin>>num;
        while(num<0)
        {
            cout<<"Invalid Input ! Plz enter (>0) number = ";
            cin>>num;
        }
        s[i].numOfPlayer=num;

        cout<<"Enter the points of player "<<i+1<< " = ";
        cin>>point;
        while(point<0)
        {
            cout<<"Invalid Input ! Plz enter (>0) points = ";
            cin>>point;
        }
        s[i].points=point;
    }
    cout<<endl;
    cout<<"Here are the details of Each Player on Team : "<<endl;
    cout<<endl;
    display(s);
 return 0;
}