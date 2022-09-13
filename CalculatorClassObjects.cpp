#include <iostream> //header file
using namespace std;
class calculator //we created class named calculator
{
    int a,b,n; //we put private variables that we cannot access outside the class
    public:
    void input() //function declare input
    {
    cout<< "Enter value of a:"; //function defination
    cin>>a;
    cout<< "Enter value of b:";
    cin>>b;
    cout<< "Enter Number to perform Operation (1/2/3/4):";
    cin>>n;
    }
    void output() //function declare
    {
        switch(n) //function define
        {
            case 1:
            cout<<"Addition of Two Number:"<<a+b;
            break;
            case 2:
            cout<<"Subtraction of Two Number:"<<a-b;
            break;
            case 3:
            cout<<"Multiplication of Two Number:"<<a*b;
            break;
            case 4:
            cout<<"Division of Two Number:"<<float(a)/float(b);
            break;
            default:
            cout<<"Invalid Input";
            break;
        }
    }
}; //put semicolon following curve brackets to close class
int main()
{
    calculator PC; //classname object
    PC.input(); //object.function calling
    PC.output(); //object.function calling
    return 0;
}