#include<iostream>
using namespace std;

/* 
The condition for (int j = 0; j < s - i - 1; j++) is part of a nested loop used for the bubble sort algorithm.

Let's break down its components:

1) int j = 0: This initializes a variable j and sets it to 0 before the loop starts.
This variable is typically used as an index to traverse the array.

2) j < s - i - 1: This is the loop condition. The loop will continue executing as long as the value of j is less than s - i - 1. 
Here's what each part of this condition represents:

3) s: The total number of elements in the array.

4) i: The current iteration of the outer loop. The outer loop (for(int i=0; i<s-1; i++)) runs through the entire array,
and in each iteration, the largest unsorted element is moved to its correct position at the end.

5) s - i - 1: This represents the number of elements that still need to be compared in the current pass of the outer loop.
As the outer loop progresses, the largest unsorted element is already in its correct place, so we don't need to include it 
in the inner loop comparisons.

6) Putting it all together, the inner loop (for (int j = 0; j < s - i - 1; j++)) runs through the unsorted portion of the array,
comparing adjacent elements and swapping them if necessary. The loop stops before reaching the last element because,
after each pass of the outer loop, the largest unsorted element is moved to its correct position.

This condition ensures that unnecessary comparisons are avoided, making the bubble sort algorithm more efficient.
 */
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
cout<<"Marks in Assending Order = ";
for(int i=0;i<size;i++){
    cout<<*(testScores+i)<<" ";
}
cout<<endl;
cout<<"Average Scores of student = "<<averageScore(testScores,size)<<endl;
delete [] testScores;
testScores=nullptr;
 return 0;
}