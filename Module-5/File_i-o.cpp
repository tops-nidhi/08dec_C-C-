#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    string str, read;
    ofstream out;
    out.open("D:/nidhi batch/c_C++/08dec_C_C++/module-5/hello.txt");
    cout<<"Enter the string:";
    cin>>str;
    out<<str;
    out.close();
    ifstream in("D:/nidhi batch/c_C++/08dec_C_C++/module-5/hello.txt");
    in>>read;
    cout<<read;
    in.close();
    return 0;
}
