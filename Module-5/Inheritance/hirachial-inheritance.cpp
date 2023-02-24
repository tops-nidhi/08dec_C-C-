#include<iostream>
using namespace std;
class parent 
{
    public:
    int no1 , no2;
    void gatdata()
    {
        cout<<"enter the value of  number1";
        cin>>no1;
        cout<<"enter the value of  number2";
        cin>>no2;
    }
};
class add :public parent
{
public:
  void addi()
  {
     int ans;
   ans = no1 + no2;
   cout<<"addition of no1 and no2 is:"<<ans;
  }
};
class sub :public parent
{
public:
    void subt()
    {
        int ans;
        ans = no1 - no2;
        cout<<"subtraction of no1 and no2 is:"<<ans;
    }
};
int main()
{
    add a;
    sub b;
    int choice;
    cout<<"\n1. for addition";
    cout<<"\n2. for subtraction";
    cin>>choice;
    switch(choice)
    {
        case 1:
         a.gatdata();
         a.addi();

         break;

        case 2:
          b.gatdata();
          b.subt();

          break;
           
           default:
           cout<<"invalid choice";

            break;
    }  
}