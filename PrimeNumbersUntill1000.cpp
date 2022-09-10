#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
    int i,j,prime;
    for(i=2; i<=1000; i++){
        prime = 0;
        for(j=2; j<=i/2; j++){
            if(i%j == 0){
            prime = 1;
            break;
            }
        }
        if(prime == 0)
            cout<<i<<" ";
    }   
    return 0;
}