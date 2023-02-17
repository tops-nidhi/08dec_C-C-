#include<iostream>
using namespace std;
class Construct
{
public:
    Construct()
    {
        cout<<"This is default constructor."<<endl;
    }
    Construct(int no)
    {       
        cout<<"\nValue of no is:"<<no;
    }
};
int main()
{
    int no;
    cout<<"Enter the value of no:";
    cin>>no;
    Construct con2(no);
    Construct con;

}