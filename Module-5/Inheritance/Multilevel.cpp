#include<iostream>
using namespace std;
class Grand
{
public:
    void gadata()
    {
        cout<<"This is grand parent class";
    }
};
class Parent : public Grand
{
public:
    void pdata()
    {
        cout<<"\nThis is parent class";
    }
};
class Child : public Parent
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