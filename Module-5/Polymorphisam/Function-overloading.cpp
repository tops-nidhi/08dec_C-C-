#include<iostream>
using namespace std;
class Phisam
{
public:
    int add (int a, int b)
    {
        return a + b;
    }
    int add (int a, int b, int c)
    {
        return a+b+c;
    }
};
int main()
{
    Phisam ph;
    cout<<ph.add(12, 56);
    cout<<endl<<ph.add(1,2,3);
}