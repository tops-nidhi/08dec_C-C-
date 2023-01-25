// Call by value
#include<stdio.h>
void data(int, char);

void main()
{
    data(20,'a');
    int no;
    char nm;
    printf("Enter your name:");
    scanf("%c",&nm);
    printf("Enter the value of no:");
    scanf("%d",&no);
    // data(no,nm);
}
void data(int no, char nm)
{
    printf("Value of no is:%d\nYour name is:%c\n",no,nm);
}