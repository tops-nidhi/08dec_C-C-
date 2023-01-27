#include<stdio.h>
int a,b;
float getdata()
{       
    printf("Enter the valeu of a and b:");
    scanf("%d%d",&a,&b);
    return 0;
}
float divistion()
{
    // return (float)a/(float)b;//explicite converstion
    return a/b;
}
float main()
{
    getdata();
    printf("%f",divistion());
}