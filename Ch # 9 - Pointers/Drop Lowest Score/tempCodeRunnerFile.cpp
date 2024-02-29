#include<iostream>
using namespace std;

void sortedArray(double ts[],int s)
{
     
for(int i=0;i<s-1;i++) 
    {
        
    for(int j=0;j<s-i-1;j++)
        {
        if(*(ts+j)>*(ts+j+1))
            {
                double temp=*(ts+j);
                temp=*(ts+j);                 
                *(ts+j)=*(ts+j+1);
                *(ts+j+1)=temp;
              //  swap(ts[j],ts[j+1]);
            }
        }
    }
}
double averageScore(double ts[],int s){
    double total=0;
    for(int i=0;i<s;i++){
        total+=*(ts+i);
    }
   return (total/s);
}
double averageScoreWithoutLowestScore(double ts[],int s){
double total=0;
    for(int i=1;i<s;i++){
        total+=*(ts+i);
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
cout<<"Enter the test scores of a student:"<<endl;
for(int i=0;i<size;i++)
{
    cout<<"The test score of subject number "<<i+1<<" is = ";
    cin>>*(testScores+i);
    if(testScores[i]<0)
    {
    cout<<"Invalid Output Plz enter correct marks = ";
    cin>>*(testScores+i);
    }
}
sortedArray(testScores,size);
averageScore(testScores,size);
averageScoreWithoutLowestScore(testScores,size);
cout<<"Marks in Assending Order = ";
for(int i=0;i<size;i++){
    cout<<*(testScores+i)<<" ";
}
cout<<endl;
cout<<"Total Average Scores of a student = "<<averageScore(testScores,size)<<endl;
cout<<"Average Scores of a student excluding his lowest score = "<<averageScoreWithoutLowestScore(testScores,size)<<endl;
delete [] testScores;
testScores=nullptr;
return 0;
}