#include<stdio.h>
long int fecto(int no)
{
    if (no <= 1)
        return 1;
    return no*fecto(no-1);
}
int main()
{
    int no;
    printf("Enter the no that you want to get fectorial:");
    scanf("%d",&no);
    printf("Fectoial of %d is:%ld",no,fecto(no));
}