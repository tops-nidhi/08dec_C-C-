#include <iostream>
using namespace std;
class Virtual
{
public:
    virtual void  data() = 0;
};
class Virtual1 : public Virtual
{
public:
    void data()
    {
        cout<<"This si pure virtual function.";
    }
};
int main()
{
    Virtual1 v1;
    v1.data();
}