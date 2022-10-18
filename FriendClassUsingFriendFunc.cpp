#include <iostream>
using namespace std;
class A;//forward declaration
class B
{
    int x;
    public:
    void setvalue(int i)
    {
        x=i;
    }
    friend void mean (B,A);
};
class A
{
    int a;
    public:
    void setvalue(int i)
    {
        a=i;
    }
    friend void mean (B,A);
};
void mean (B m,A n)
{
    if (m.x>=n.a)
    {
        cout<<m.x;
    }
    else
    {
        cout<<n.a;
    }
}
int main()
{
    A ob1;
    ob1.setvalue(10);
    B ob2;
    ob2.setvalue(20);
    mean(ob2,ob1);
}
