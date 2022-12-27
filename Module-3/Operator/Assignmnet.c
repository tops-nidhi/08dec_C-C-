#include<stdio.h>
void main()
{
    /*
        += - Assignment Add
        -= - Assignment sub
        *= - Assignment mul
        /= - Assignment div
    */
    int a, b;
    printf("Enter the value of a & b:");
    scanf("%d%d",&a,&b);

    a += b;
    printf("\nAssignnmeent addition of a and b is:%d",a);

    a -= b;
    printf("\nAssignment substraction of a and b is:%d",a);
    
    a *= b;
    printf("\nAssignemnt multiplication  of a and b is:%d",a);
     
    a /= b;
    printf("\nAssignemnt divistion of a and b is:%d",a);
}