#include <iostream>
using namespace std;
class nest
{   public:
    int num;
    void input()
    {
        cout<<"Enter a number: ";
        cin>>num;
    }
    void square()
    {
        int sqr;
        sqr=num*num;
        cout<<"Square of NUmber is: "<<sqr<<endl;
    }
    void cube()
    {
        int cub;
        cub=num*num*num;
        cout<<"Cube of Number is: "<<cub<<endl;
    }
    void display ()
    {
        input();
        cout<<"Squares:"<<endl;

        square();
        cout<<"Cube:"<<endl;
        cube();
    }
};
int main()
{
    nest PC;
    PC.display();
    return 0;
}
