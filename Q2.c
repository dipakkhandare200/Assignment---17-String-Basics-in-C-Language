//2. Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],ch;
    int i,count=0;
    printf("Enter the string = \n");
    gets(str);
    printf("Enter the character you want to search = \n");
    scanf("%c",&ch);
    for(i=0;i<=strlen(str);i++)
    {
        if(str[i]==ch)
        {
            count++;
        }
    }
    printf("Total number of times '%c' has occured = %d",ch,count);
    return 0;
}
