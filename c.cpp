#include<iostream>
using namespace std;
int main()
{
     char std[27];
    int i,j=0;
    char a;
    cout<<"enter the press a lower case and press A a uppar case:";
    cin>>a;
    switch (a)
    {
        case 'a':
        for(i=97;i<=112;i++)
        {
           std[j]=i;
            j++;
        }
        cout<<std;
        break;
        case 'A':
        for(i=65;i<=87;i++)
        {
           std[j]=i;
            j++;
        }
        cout<<std;
        break; 
        default:
        cout<<"invalide chocie";
        break;
    }
    




    
}

