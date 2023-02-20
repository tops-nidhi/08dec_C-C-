#include<iostream>
using namespace std;
class Abstract{
private:
    int no;
public: 
    Abstract(int n)
    {
        no = n;
        no++;
        cout<<"Value of no is:"<<no;
    }
};

int main()
{
    int n;
    cout<<"Enter the value of no:";
    cin>>n;
    Abstract ab(n);
}   