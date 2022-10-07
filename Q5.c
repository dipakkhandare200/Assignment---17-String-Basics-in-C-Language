//5. Write a program to convert a given string into lowercase
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i;
    printf("Enter the  string in uppercase = ");
    fgets(str,100,stdin);
    printf("the lowercase is = %s",strlwr(str));
    return 0;
}
