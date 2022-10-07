//6. Write a program to reverse a string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i;
    printf("Enter the  string = ");
    fgets(str,100,stdin);
    printf("The Reverse String is = %s",strrev(str));
    return 0;
}
