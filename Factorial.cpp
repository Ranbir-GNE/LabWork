#include <iostream>
using namespace std;
class factorial
{
    public:
    int i,fact=1,num;
    void input();
    void output()
    {
        for(i=1;i<=num;i++)
        fact=i*fact;
        cout<<"Factorial of "<<num<<" is: "<<fact;
    }
};
void factorial::input()
    {
        cout<<"Enter a number:";
        cin>>num;
    }
int main()
{
    factorial obj;
    obj.input();
    obj.output();
    return 0;
}