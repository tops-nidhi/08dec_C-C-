#include<stdio.h>
int main()
{
    int ch;
    int no1, no2;
    int ans;

    printf("Enter the 2 value to perform arithmatic opartion:");
    scanf("%d%d",&no1,&no2);
    printf("\n1.Add\n2.Sub\n3.Mul\n4.Div\n");
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:

        ans = no1 + no2;
        printf("\nAddition of a and b is:%d", ans);
        break;
    case 2:
        ans = no1 - no2;
        printf("\nSubstraction is:%d",ans);
        break;
    case 3:
        ans = no1 * no2;
        printf("\nMultiplication is:%d",ans);
        break;
    
    case 4:
        ans = no1 / no2;
        printf("\nDivition is:%d",ans);
        break;

    default:
        printf("\nEnter valid choice..............");
        break;
    }
    return 0;
}