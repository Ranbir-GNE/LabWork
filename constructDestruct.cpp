#include <iostream>
using namespace std;
class constructor
{
    public:
    constructor()
    {
        cout<<"Object Created";
    }
    ~constructor()
    {
        cout<<"Object Destroyed";
    }
};
int main()
{
    constructor ob1;
}