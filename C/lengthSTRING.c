#include <stdio.h>
int main()
{
    char s[100];
    int count = 0;
    printf("Enter any string : ");
    gets(s);
    while (s[count] != '\0')
    {
        count++;
    }
    printf("The length of string is %d. ", count);
    return 0;
}