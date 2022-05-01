#include <stdio.h>
int main()
{
    int m1[2][2] = {{1,2},{3,4}};
    int m2[2][2] = {{5,6},{7,8}};
    int m3[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }
    printf("The matrix after addition is -->\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t",m3[i][j]);
        }
        printf("\n");
    }
}