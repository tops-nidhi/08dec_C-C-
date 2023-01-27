#include<stdio.h>
// Call by value
int add(int a, int b)
{
    return a + b;
}
// Call by refrence
int address(int *ptr)
{
    return *ptr;
}
int main()
{
    int a, b;
    printf("Enter the valeu of a and b:");
    scanf("%d%d",&a, &b);
    printf("%d",add(a,b));
    printf("\n%d",address(&a));
}