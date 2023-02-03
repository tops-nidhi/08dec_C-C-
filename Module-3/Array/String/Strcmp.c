#include<stdio.h>
#include<string.h>
int main()
{
    int cmp;
    char str1[20], str2[20];
    printf("Enter \nfirst string:");
    scanf("%s",&str1);
    printf("Second String:");
    scanf("%s",&str2);
    cmp = strcmp(str1, str2);
    // printf("\nMax string is:%d", cmp);
    if ( cmp > 0)
    {
        printf("First string is max.");
    }
    else if ( cmp == 0)
    {
        printf("\nBoth are equle.");
    }
    else
    {
        printf("\nSecond string is max.");
    }
    
    return 0;
}