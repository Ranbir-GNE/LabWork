#include <iostream>
using namespace std;
class number
{
    int x,y;
    public:
    void getdata(int a, int b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<x <<"+i" <<y<<endl;
    }
    friend number operator +(number n1,number n2)
    {
//        number n4;
        cout<<n1.x+n2.x<<"+";
        cout<<n1.y+n2.y<<"i";
    }
};
int main ()
{
    number n1,n2;
    n1.getdata(10,20);
    n2.getdata(20,30);
    number n3;
    n3=n1+n2; //n3=operator+(n1+n2)
//    n3.display();
}