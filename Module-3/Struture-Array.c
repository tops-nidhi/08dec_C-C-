#include<stdio.h>
struct Stdata
{
    int id;
    char nm[20];
};
int main()
{
    struct Stdata st[10];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter student's id:");
        scanf("%d",&st[i].id);
        printf("Enter student's name:");
        scanf("%s",&st[i].nm);
    }
    for (i = 0; i < 5; i++)
    {
        printf("\nStudent's\n id is:%d \n name is:%s",st[i].id, st[i].nm);
    }
}