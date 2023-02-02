#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int i = 0;
    int a;
    int len;
    for (a = 65; a < 88; a++)
    {

        str[i] = a;
        i++;
    }
    // printf("Enter the string:");
    // scanf("%s",&str);
    printf("\nYour entered string is:%s",str);
    len = strlen(str);
    printf("\nLength of the your entered string is:%d",len);
    // printf("\nString is:%s",str);
    return 0;
}
/*
a
a b
a b c
a b c d
a b c d e
*/