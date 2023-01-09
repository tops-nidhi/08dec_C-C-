#include<stdio.h>
int main()
{
    int a, b, c;
    printf("enter the value of\nA:");
    scanf("%d",&a);
    printf("B:");
    scanf("%d",&b);
    printf("C:");
    scanf("%d",&c);
    if (a > b)
    {
        if (a > c)
        {
            printf("%d is max no.",a);
        }
        else
        {
            printf("%d is max no.",c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("%d is max no.",b);
        }
        else
        {
            printf("%d is max no.",c);
        }
    }
    return 0;
}