#include<stdio.h>
union Stdata
{
    int id;
    char nm[20];
};
int main()
{
    union Stdata obj[5];
    int i;
    for (i = 0; i < 5; i++)
    {        
        printf("Enter student's name:");
        scanf("%s",&obj[i].nm);
        printf("Enter student's id:");
        scanf("%d",&obj[i].id);
    }
    for (i = 0; i < 5; i++)
    {
        printf("\nStudent's\n id is:%d \n name is:%s",obj[i].id, obj[i].nm);
    }
    
    
}