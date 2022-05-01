#include <stdio.h>
int main()
{
    int n;
    printf("Enter order of matrix : ");
    scanf("%d",&n);
    int m1[n][n];
    int m2[n][n];
    int m3[n][n];
    printf("-----------ENTER VALUE FOR MATRIX 1 -----------\n");
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
    printf("-----------ENTER VALUE FOR MATRIX 2 -----------\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        { 
            int cho;
            printf("Enter the value of row %d and col %d in matrix m2 : ", i + 1, j + 1);
            scanf("%d",&cho);
            m2[i][j] = cho;
        }
        
    }

    printf("-----------matrix 1-----------\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t",m1[i][j]);
        }
        printf("\n");
    }

    printf("-----------matrix 2-----------\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t",m2[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            m3[i][j] = m1[i][j] - m2[i][j];
        }
    }
    printf("The matrix after subtraction is -->\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t",m3[i][j]);
        }
        printf("\n");
    }
}