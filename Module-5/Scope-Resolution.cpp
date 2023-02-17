#include<iostream>
using namespace std;
int no = 100;
int main()
{
    int no = 10;
    cout<<"Value of local no is:"<<no;
    cout<<"\nValue of global no is"<<::no;
}