#include<iostream>
using namespace std;
int main()
{
    int num, f1=0, f2=1, f=0;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Fibonacci series of number:-\n";
    do{
        f=f1+f2;
        f1=f2;
        f2=f;
        cout<<f<<" ";
        num--;
    }while(num>0);
    return 0;
}