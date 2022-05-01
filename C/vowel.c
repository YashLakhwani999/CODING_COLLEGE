#include <stdio.h>
int main()
{
    char a;
    printf("Enter a character : ");
    scanf("%c", &a);
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U')
    {
        printf("The character entered '%c' is a vowel. ", a);
    }
    else
    {
        printf("The character entered '%c' is not a vowel. '%c' is a consonant. ", a,a);
    }
    return 0;
}