#include<iostream>
using namespace std;
class A
{
public:
    void adata()
    {
        cout<<"This is class A.";
    }
};
class B : virtual public A
{
public:
    void badata()
    {
        cout<<"\nThis is class B.";
    }
};
class C : virtual public A
{
public:
    void cdata()
    {
        cout<<"\nThis is class C.";
    }
};
class D : public B, public C
{
public:
    void ddata()
    {
        cout<<"\nThis is class D.";
    }
};  
int main(int argc, char const *argv[])
{
    D d1;
    d1.adata();
    d1.badata();
    d1.cdata();
    d1.ddata();
    return 0;
}
