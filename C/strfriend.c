#include <stdio.h>
#include <string.h>

int main()
{
    char s1[50];
    char s2[50];
    char s3[50];
    printf("Enter the name of 1st friend : ");
    gets(s1);
    printf("Enter the name of 2nd friend : ");
    gets(s2);
    printf("The final statement is : ");
    gets(s3);
    puts(strcat(strcat(s1, s3), s2));
    return 0;
}