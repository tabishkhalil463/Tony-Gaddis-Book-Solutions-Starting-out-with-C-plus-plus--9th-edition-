#include<iostream>
#include<String>
using namespace std;

void sortedArray(double ts[],string std[],int s)
{
for(int i=0;i<s-1;i++) 
    {
    for(int j=0;j<s-i-1;j++)
        {
        if(*(ts+j)>*(ts+j+1))
            {
                double tempScores=*(ts+j);                
                *(ts+j)=*(ts+j+1);
                *(ts+j+1)=tempScores;
                 string tempNames=*(std+j);               
                *(std+j)=*(std+j+1);
                *(std+j+1)=tempNames;
            }
        }
    }
}
double averageScore(double ts[],int s){
    double total=0;
    for(int i=0;i<s;i++){
        total+=ts[i];
    }
   return (total/s);
}

int main()
{
 int size;
 cout<<"Enter the size of array = ";
 cin>>size;

double*testScores=nullptr;
testScores= new double[size];

string*students=nullptr;
students=new string[size];

cout<<"Enter the names and test scores of student :"<<endl;
for(int i=0;i<size;i++){
    cout<<"Name of Student "<<i+1<<" is = ";
    cin>>*(students+i);
    cout<<"Test Scores of student "<<i+1<<" is =";
    cin>>*(testScores+i);
    if(*(testScores+i)<0)
    {
    cout<<"Invalid Output Plz enter correct marks = ";
    cin>>*(testScores+i);
    }
}
sortedArray(testScores,students,size);
cout<<"Marks in Assending Order : "<<endl;
for(int i=0;i<size;i++){
    cout<<*(students+i)<<" = "<<*(testScores+i)<<endl;
}
cout<<"Average Scores of student = "<<averageScore(testScores,size)<<endl;
delete [] testScores;
delete[]students;
testScores=nullptr;
students=nullptr;
 return 0;
}