#include<stdio.h>
union Stdata
{
    int id;
    char nm[20];
};
int main()
{
    union Stdata obj;
    printf("Enter student's name:");
    scanf("%s",&obj.nm);
    printf("Enter student's id:");
    scanf("%d",&obj.id);
    printf("Student's\n id is:%d \n name is:%s",obj.id, obj.nm);
}