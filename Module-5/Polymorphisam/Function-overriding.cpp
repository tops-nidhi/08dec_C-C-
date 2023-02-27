#include<iostream>
using namespace std;
class A
{
public:
    float div(float a, float b)
    {
        return a/b;
    }
};
class B
{
public:
    float div(float a, float b)
    {
        return a/b;
    }
};
int main()
{
    A a;
    B b;
    cout<<a.div(56,3);
    cout<<endl<<b.div(12, 3);
    return 0;
}