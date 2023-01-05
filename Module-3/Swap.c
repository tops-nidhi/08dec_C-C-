#include<stdio.h>
int main()
{
    int a, b;
    int temp;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    printf("\nBefore value swapping value of a is:%d and b is:%d", a, b);
    temp = a;
    b = a + b;
    a = b - a;
    b = temp;
    printf("\nAfter value swapping value of a is:%d and b is:%d", a, b);
    return 0;
}
/*
a = 10
b = 20
temp = 10;
b = a+b;
b = 30;
a = b - a;
a = 20;
b = temp;
b = 
*/