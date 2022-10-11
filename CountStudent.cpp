#include <iostream>
using namespace std;
class student
{
    public:
    string name;
    int rn, mark;
    static int count;
    void getdata()
    {
    cout<<"Enter student name: ";
    cin>>name;
    cout<<"Enter roll number: ";
    cin>>rn;
    cout<<"Enter marks of student: ";
    cin>>mark;
    count+=1;
    }
    void putdata()
    {
    cout<<"Name of student: "<<name<<endl;
    cout<<"Roll number of student: "<<rn<<endl;
    cout<<"Marks of student: "<<mark<<endl;
    cout<<endl; 
    }
};
int student::count;
int main()
{
    student s1, s2;
    s1.getdata();
    s1.putdata();
    s2.getdata();
    s2.putdata();
    cout<<"No. of student data has been entered: "<<student::count<<endl;
    return 0;
}