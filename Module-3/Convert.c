#include<stdio.h>
void main()
{
    float day;
    float year;
    printf("Enter the no of days:");
    scanf("%f",&day);
    printf("\nNo of days:%f",day);
    year = day/365;
    printf("\nTotal year is:%f",year);

}