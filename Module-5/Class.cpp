#include<iostream>
using namespace std;
class Demo
{
    int no;
public:
    int getdata()
    {
        cout<<"Enter the value of no:";
        cin>>no;
        return 0;
    }
    void showdata()
    {
        cout<<"Value of no is:"<<no;
    }
};
int main()
{
    Demo d1;
    d1.getdata();
    d1.showdata();
}