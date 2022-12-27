#include<stdio.h>
int main()
{
    /*
        == - equle to(Use to check equle or not)
        < - Less then
        <= - Less then or equle to
        > - Grater than
        >= - Grater then or equle to 
        != - Not equle to
    */

   int a,b;
   printf("Enter the value of\na:");
   scanf("%d",&a);
   printf("b:");
   scanf("%d",&b);
   if (a < b)
   {
        printf("\nTrue");
   }
   else
   {
        printf("\nFalse");
   }
   
    return 0;
}