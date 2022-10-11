#include <iostream>
using namespace std;
class constructor
{
    int a;
    public:
    constructor ()
    {
        a=10;
    }
    constructor (int i)
    {
        a=i;
    }
    constructor (constructor & ob2)
    {
        a=ob2.a;
    }
    void show()
    {
        cout<<a<<endl;
    }
};
int main()
{
    constructor ob1;
    constructor ob2 (20);
    constructor ob3 (ob2);
    ob1.show();
    ob2.show();
    ob3.show();
}