#include<iostream>
using namespace std;
int main (){
    int num, sum=0;
    cout<<"Enter number: \n";
    for(int i=1; i<=10; i++){
    cin>>num;
    if(num>0)
        sum+=num;
    else
        break;
    }
    cout<<"Sum is: "<<sum;
    return 0;
}