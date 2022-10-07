//8. Write a program in C to copy one string to another string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int i;
    printf("Enter the  string = ");
    fgets(str1,100,stdin);
    printf("Enter the new to copy in this string = ");
    fgets(str2,100,stdin);
    printf("The copy stored in String is = %s",strcpy(str1,str2));
    return 0;
}

