#include<stdio.h>
int id;
void getdata()
{
    printf("Enter the value of id:");
    scanf("%d",&id);
}
void showdata()
{
    printf("Vlaue of id is:%d",id);   
}
void main()
{
    getdata();
    showdata();
}