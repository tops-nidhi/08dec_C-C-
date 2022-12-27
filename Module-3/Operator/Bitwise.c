#include<stdio.h>
int main()
{
    /*
        & - Bitwise And
        | - Bitwise Or
        ^ - Bitwise Exclusive or
        ~ - Bitwise Compliment
        << - Bitwise Shift Left
        >> - Bitwise Shift Right
    */
    int a,b;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a, &b);
    
    return 0;
}


/*
a = 2;
b = 3;
    Bitwise And -10(2)
    Bitwise Or - 11(3)
    Bitwise Exclusive or - 01(1)
    Bitwise Compliment - of a(11111111101-(-3))
    Bitwise Shift Left - of a (100 - 4)
    Bitwise Shift Right - of b (01 - 1)
*/