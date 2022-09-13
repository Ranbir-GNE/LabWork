#include<iostream>
using namespace std;
int main()
{
    int num, a[10], sum;
    float average;
    cout<<"Enter number of elements of array: ";
    cin>>num;
    for(int i=0; i<num; i++){
    cout<<"Enter a["<<i<<"] elements of array: ";
    cin>>a[i];
    }
    sum=0;
    for(int i=0; i<num; i++){
    sum+=a[i];
    }
    cout<<"Sum of "<<num<<" elements of array: "<<sum;
    average=float(sum)/num;
    cout<<"\nAverage of "<<num<<" elements of array: "<<average;
    return 0; 
}