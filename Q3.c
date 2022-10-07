//3. Write a program to count vowels in a given string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],ch;
    int i,count=0;
    printf("Enter the string = \n");
    gets(str);
    for(i=0;i<=strlen(str);i++)
    {
        switch(str[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            count++;
            break;
            }
    }
    printf("Total number of vowels has occured = %d",count);
    return 0;
}

