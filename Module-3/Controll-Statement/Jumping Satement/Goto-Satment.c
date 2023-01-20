#include<stdio.h>
void main()
{
    int i;
    int no, flag=0;
    printf("Enter the no to check wether it's prime or not:");
    scanf("%d",&no);
    for ( i = 2; i < no; i++)
    {
        if (no%i == 0)
        {
            flag = 1;
            goto prime;
        }
    }
    prime:
        if (flag == 0)
        {
            printf("\n%d is prime no.",no);
        }
        else
            printf("\n%d is not prime no.",no);
    
}