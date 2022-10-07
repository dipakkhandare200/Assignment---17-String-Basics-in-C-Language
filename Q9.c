//9. Write a C program to sort a string array in ascending order.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j,ch;
    printf("Enter the  string = ");
    fgets(str,100,stdin);
    for(i=1;i<strlen(str);i++)
    {
     for(j=0;j<strlen(str)-i;j++)
    {
        if(str[j]>str[j+1])
        {
            ch=str[j];
            str[j]=str[j+1];
            str[j+1]=ch;
        }
    }
   }
   printf("After Sorting in  Ascending order String = %s",str);
 return 0;
}
