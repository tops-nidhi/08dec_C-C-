#include<iostream>
using namespace std;
class Operator
{
public:
    int no;
    Operator(int n)
    {
        no = n;
    }
    Operator operator ++()
    {
        no++;
    }
    void print()
    {
        cout<<"Value of no is:"<<no<<endl;
    }
};
int main()
{
    Operator op(10);
    op.print();
    ++op;
    op.print();
}