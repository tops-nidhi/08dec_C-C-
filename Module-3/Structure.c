#include<stdio.h>
struct Stdata
{
    int id;
    char nm[20];
}st;
int main()
{
    printf("Enter student's id:");
    scanf("%d",&st.id);
    printf("Enter student's name:");
    scanf("%s",&st.nm);
    printf("Student's\n id is:%d \n name is:%s",st.id, st.nm);
}