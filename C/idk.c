#include <stdio.h> 
int main()
{

    int i, j, k;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf("  ");
        }
        for (k = 4; k >= i; k--)
        {
            printf(" *  ");
        }
        printf("\n");
    }
    return 0;
    // int y;
    // int x;
    // y = 1;
    // x = 1;
    // int z = x+y;
    // printf("%d\n",x);
    // printf("%d\n",z);
}
