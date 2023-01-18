#include<stdio.h>
void main()
{
    int i,j;
    for ( i = 5; i >= 0; i--) //for row(outer loop)
    {
        for ( j = 0; j <= i; j++) //for column(inner loop)
        {
            printf("😋 ");
        }
        printf("\n");
    }    
}