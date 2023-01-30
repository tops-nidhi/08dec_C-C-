#include<stdio.h>
int main()
{
    // int array[5][5]={{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
    int array[5][5];
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Enter the vlaue of array[%d][%d]:",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("\nValue of array[%d][%d]:%d",i,j,array[i][j]);
        }
    }  
    return 0;
}