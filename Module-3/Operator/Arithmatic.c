#include<stdio.h>
void main()
{
    int a, b;
    int ans;
    printf("Enter the value of \na:");
    scanf("%d",&a);
    printf("b:");
    scanf("%d",&b);

    ans = a + b;
    printf("\n-----------------Additoion--------------------\n");
    printf("\nAddition is:%d",ans);

    printf("\n-----------------Substraction--------------------\n");
    printf("\nSubstraction is:%d",a - b);

    ans = a * b;
    printf("\n-----------------Multipliction--------------------\n");
    printf("\nMultiplication is:%d",ans);

    printf("\n-----------------divistion--------------------\n");
    printf("\nDivition is:%d",a/b);

    printf("\n-----------------Modulo--------------------\n");
    // Modulo is use to return a reminder
    printf("\nModulo is:%d",a%b);

    printf("\n-----------------Unnaury--------------------\n");
    a++;
    printf("\nAfter increment value of a is:%d",a);
    b--;
    printf("\nAfter decrement value of b is:%d",b);
}