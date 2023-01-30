#include<stdio.h>
int main()
{
    int id[10];
    int i;
    /*scanf("%d",&id[0]);
    scanf("%d",&id[1]);
    scanf("%d",&id[2]);
    scanf("%d",&id[3]);
    scanf("%d",&id[4]);
    scanf("%d",&id[5]);
    scanf("%d",&id[6]);*/
    for ( i = 0; i < 10; i++)
    {
        printf("\nEnter the value of id[%d]:",i);
        scanf("%d",&id[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        printf("\n Value of id[%d] is:%d",i,id[i]);
    }
    
    return 0;
}