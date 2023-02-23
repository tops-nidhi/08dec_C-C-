#include<iostream>
using namespace std;
class Base
{
public:
    int no;
    void getdata()
    {
        cout<<"Enter the value of no:";
        cin>>no;
    }
};
class Derived : public Base
{
public:
    void showdata()
    {
        cout<<endl<<"Value of no is:"<<no;
    }
};
int main()
{
    Derived d1;
    d1.getdata();
    d1.showdata();
    return 0;
}