#include <stdio.h>
int main()
{
    int x, y, z;
    x = 1;
    y = 1;
    printf("Enter the number whose factorial you need : ");
    scanf("%d", &z);
    if (z < 0)
    {
        printf("Error!! factorial of negative number doesnot exist.");
    }
    else
    {
          while (x <= z)
        {
            y = y * x;
            x = x + 1;
        }
        printf("The factorial of  %d  is  %d.\n", z, y);
    }
    return 0;
}