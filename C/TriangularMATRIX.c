#include <stdio.h>
int main()
{
    int m1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    printf("Given MATRIX is -->\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",m1[i][j]);
        }
        printf("\n");
    }
    printf("The upper Triangular MATRIX of given matrix is -->\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i > 0 && i > j)
            {
                printf("0\t");
            }
            else
            {
                printf("%d\t",m1[i][j]);
            }
        }
        printf("\n");
    }
    printf("The lower Triangular MATRIX of given matrix is -->\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j > 0 && j > i)
            {
                printf("0\t");
            }
            else
            {
                printf("%d\t",m1[i][j]);
            }
        }
        printf("\n");
    }
}