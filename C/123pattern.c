#include <stdio.h>
void space()
{
    static int i = 4;
    for (int j = 0; j < i; j++)
    {
        printf(" ");
    }
    i--;
}
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        space();
        for (int j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        for (int m = i - 1; m > 0; m--)
        {
            printf("%d",m);
        }
        printf("\n");
    }
    return 0;
}