#include<stdio.h>
void main()
{
    int no;
    printf("Enter the no to check whther it's positive or not:");
    scanf("%d",&no);
    if (no > 0)
    {
        printf("%d is positive no.",no);
    }
    else if (no == 0)
    {
        printf("Zero no.");
    }
    
    else{
        printf("%ds is negative no.",no);
    }
}