#include<iostream>
using namespace std;
class Capsule
{
    int a, b;
public:
    int data(int x, int y)
    {
        a = x;
        b = y;
        cout<<"Value of a is:"<<a<<endl<<"Value of b is:"<<b;
        return 0;
    }
};
int main()
{
    Capsule cap;
    cap.data(23,12);
    return 0;
}