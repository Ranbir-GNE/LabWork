#include <iostream>
using namespace std;
class alphabet
{
    public:
    static int x;
    static int y;
    static void print()
    {
        cout<<"Value of x: "<<x<<endl;
        cout<<"Value of y: "<<y<<endl;
    }
};
int alphabet :: x=10;
int alphabet :: y=20;
int main()
{
    alphabet a;
    cout<<"Printing values through object name: "<<endl;
    a.print();
    cout<<"Printing values through class name: "<<endl;
    alphabet::print();
    return 0;
}