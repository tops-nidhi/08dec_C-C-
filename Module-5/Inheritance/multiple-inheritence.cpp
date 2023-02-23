#include<iostream>
using namespace std;
class Parent1
{
public:
    void gadata()
    {
        cout<<"This is grand parent class";
    }
};
class Parent2 
{
public:
    void pdata()
    {
        cout<<"\nThis is parent class";
    }
};
class Child : public Parent1 , public Parent2 
{
public:
    void cdata()
    {
        cout<<"\nThis is child class.";
    }
};
int main()
{
    Child c1;
    c1.gadata();
    c1.pdata();
    c1.cdata();
}