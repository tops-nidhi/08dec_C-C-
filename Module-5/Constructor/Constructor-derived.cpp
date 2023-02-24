#include<iostream>
using namespace std;
class Parent
{
protected:
    Parent(int n){
        cout<<n<<endl;
    }
};
class Child : virtual Parent
{
public:
    Child(int no):Parent(no)
    {
        cout<<"This is constructor in derived class.";
    }
};
int main()
{
    Child c1(10);
}