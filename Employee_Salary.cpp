#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Employee salary: ";
    cin>>n;
    if(n>=15000)
    cout<<"Employee belongs to group A";
    else if((n<15000)&&(n>=10000))
    cout<<"Employee belongs to group B";
    else if((n<10000)&&(n>=5000))
    cout<<"Employee belongs to group C";
    else if(n<5000)
    cout<<"Employee belongs to group D";
    return 0;
}