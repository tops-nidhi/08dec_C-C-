#include<stdio.h>
void main()
{
    /*
        && - Logical AND
        || - Logical OR
        ! - Ligical NOT
    */
   int a ,b;
   printf("Enter the value of\na:");
   scanf("%d",&a);
   printf("b:");
   scanf("%d",&b);
   
   if (!(a<10 || b>10))
   {
        printf("\nTrue");
   }
   else
   {
        printf("\nFalse");
   }
   
}