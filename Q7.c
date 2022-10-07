//7. Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i=0,alphabets=0,digits=0,special=0;
    printf("Enter the  string = ");
    fgets(str,100,stdin);
    for(i=0;str[i];i++)
    {
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
        {
            alphabets++;
        }
       else if(str[i]>='1'&&str[i]<='9')
        {
            digits++;
        }
        else
        {
            special++;
        }

   }
        printf("Alphabets in string =%d\n",alphabets);
        printf("Digits in string =%d\n",digits);
        printf("Special Character in string =%d\n",special);

       return 0;
}
