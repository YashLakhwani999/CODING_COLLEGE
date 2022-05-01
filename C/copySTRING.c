#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], r[100];
    printf("Enter a string : ");
    gets(s);
    strcpy(r, s);
    printf("the string is succesfully copied .\n");
    puts(r);
    return 0;
}