#include <stdio.h>
int main()
{
    char filename[100],ch;
    int upper = 0, lower = 0, special = 0, number = 0;
    FILE *f1;
    printf("Enter the name of file you want to open : ");
    scanf("%s", filename);
    f1 = fopen(filename, "r");
    do
    {
        ch = fgetc(f1);
        if (ch >= 0 && ch <= 9)
        {
            number++;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            upper++;
        }
        else if (ch >= 'a' && ch<= 'z')
        {
            lower++;
        }
        else
        {
            special++;
        }
        
    } while (ch != EOF);
    printf("The number of uppercase present in file are : %d.\n",upper);
    printf("The number of lowercase present in file are : %d.\n",lower);
    printf("The number of numbers present in file are : %d.\n",number);
    printf("The number of specail character present in file are : %d.\n",special);
    return 0;
}