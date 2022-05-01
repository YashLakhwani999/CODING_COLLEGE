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
    printf("The transpose of given MATRIX is -->\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",m1[j][i]);
        }
        printf("\n");
    }
}