#include<stdio.h>
int main()
{
    int *ptr;
    int a = 100;
    ptr = &a;
    printf("\nAddress of the a is:%d",ptr);
    // ++ptr;
    // printf("\nAfter increment address of a is:%d",ptr);
    printf("\nValue of a is:%d",*ptr);
    ++*ptr;
    printf("\nAfter increment value of a is:%d",a);
    *ptr = 13;
    printf("\nVlaue of a is:%d",a);
}