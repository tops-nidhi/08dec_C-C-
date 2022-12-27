#include<stdio.h>
float no; //global varible
void main()
{
    //Varible diclerastion 

    // int no; //local variable
   
    // no = 100; //static value | Compile time
    
    printf("Enter the value of no:");
    scanf("%f",&no);
   
    printf("\nValue of no is:%f",no);
}