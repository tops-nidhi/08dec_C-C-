#include<iostream>
using namespace std;
template <class T>
T data(T a, T b)
{
    return a/b;
}
int main(int argc, char const *argv[])
{
    cout<<data<int>(12,2);
    cout<<endl<<data<float>(12,5);
    return 0;
}
