#include<iostream>
using namespace std;
template <typename T>
class Template
{
public:
    Template(T a)
    {
        cout<<"\nValue of a is:"<<a;
    }
};
int main(int argc, char const *argv[])
{
    Template <int> temp(12);
    Template <float> temp1(1.2);
    return 0;
}