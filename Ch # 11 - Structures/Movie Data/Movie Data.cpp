#include<iostream>
#include<string>
using namespace std;

struct MovieData
{
    string title;
    string director;
    int yearReleased;
    int runningTime;
};
void display(const MovieData &md)
{
    cout<<"Name = "<<md.title<<endl;
    cout<<"Director = "<<md.director<<endl;
    cout<<"Released Year = "<<md.yearReleased<<endl;
    cout<<"Running time = "<<md.runningTime<<" minutes"<<endl;
}
int main()
{
MovieData md1;
MovieData md2;

cout<<"Enter the title of the first movie = ";
cin>>md1.title;
cout<<"Enter the name of director of first movie = ";
cin>>md1.director;
cout<<"Enter the year released of first movie = ";
cin>>md1.yearReleased;
cout<<"Enter the running time of first movie in minutes = ";
cin>>md1.runningTime;

cout<<"Enter the title of the second movie = ";
cin>>md2.title;
cout<<"Enter the name of director of second movie = ";
cin>>md2.director;
cout<<"Enter the year released of second movie = ";
cin>>md2.yearReleased;
cout<<"Enter the running time of second movie in minutes = ";
cin>>md2.runningTime;

cout<<"Here are the details of movie:"<<endl;

display(md1);
display(md2);

return 0;
}
