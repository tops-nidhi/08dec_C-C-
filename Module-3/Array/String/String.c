#include<stdio.h>
void main()
{
    // char str[20]={'a','b','c','d','e'};
    // char str[20] = {"abcde"};
    char str[20];
    printf("Enter the string:");
    scanf("%s",&str);
    // printf("String is:%s",str);
    printf("3rd index is:%c",str[3]);
}