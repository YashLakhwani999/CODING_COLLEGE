#include <stdio.h>
int main()
{
    int n;
    printf("Enter the order of matrix : ");
    scanf("%d",&n);
    int m1[n][n];
    printf("\n\n");
    printf("-----------ENTER VALUE FOR MATRIX  -----------\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int ch;
            printf("Enter the value of row %d and col %d in matrix m1 : ", i + 1, j + 1);
            scanf("%d",&ch);
            m1[i][j] = ch;
        }
        
    }
    printf("Given MATRIX is -->\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t",m1[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of given MATRIX is -->\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t",m1[j][i]);
        }
        printf("\n");
    }
}