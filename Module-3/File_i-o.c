#include<stdio.h>
int main()
{
    FILE *fptr;
    char str[20], str2[20] = {"rahul"};
    fptr = fopen("D:/nidhi batch/c_C++/08dec_c_c++/module-3/hello.txt", "a");
    fprintf(fptr,"%s",str2);
    fclose(fptr);
    fptr = fopen("D:/nidhi batch/c_C++/08dec_c_c++/module-3/hello.txt", "r");
    fscanf(fptr,"%s",&str);
    printf("%s",str);
    fclose(fptr);
}