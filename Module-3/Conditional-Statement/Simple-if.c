#include<stdio.h>
int main()
{
    int no;
    printf("Enter the value of no:");
    scanf("%d",&no);
    if (no%2 == 0)
    {
        printf("Even");
    }
    else{
        printf("odd");
    }
}