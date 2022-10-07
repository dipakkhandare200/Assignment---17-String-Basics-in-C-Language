//4. Write a program to convert a given string into uppercase
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i;
    printf("Enter the string = ");
    fgets(str,100,stdin);
    printf("the uppercase is = %s",strupr(str));
   // printf("Length of the string is = %d",i);

    return 0;
}
