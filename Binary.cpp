#include <iostream>
using namespace std;
class number
{
    int x;
    public:
    void getdata (int a)
    {
        x=a;
    }
    void display ()
    {
        cout<<"\n"<<x;
    }
    number operator +(number n2)
    {
        number n4;
        n4.x=x+n2.x;
    }
};
main ()
{
    number n1,n2;
    n1.getdata(10);
    n2.getdata(20);
    number n3;
    n3=n1+n2; //n3=n1.operator+(n2);
    n3.display();
}