#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    printf("Enter string 1 : ");
    gets(str1);
    printf("Enter string 2 : ");
    gets(str2);
    printf("The string 1 before concatenation is : %s\n",str1);
    printf("The string 2 before concatenation is : %s\n",str2);
    strcat(str1, str2);
    printf("The string after concatenation is : %s",str1);
    return 0;
}