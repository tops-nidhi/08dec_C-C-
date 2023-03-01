#include<iostream>
using namespace std;
class A
{
public:
    int a;
    virtual void data()
    {
        cout<<"\nThis is base class.";
    }
};
class B : public A
{
public:
    void data()
    {
        cout<<"\nThis is derived class.";
    }
};
int main()
{
    A *a;
    B b;
    a = &b;
    a->data();

}