#include<iostream>
using namespace std;
class Construct
{
public:
    int no;
    Construct(int n)
    {
        no = n;
        cout<<"Value of no is:"<<no;
    }
    Construct(Construct &obj)
    {
        no = ++obj.no;
        cout<<"\nValue of no:"<<no;
    }
};
int main()
{
    Construct con(56);
    Construct con2 = con;

}