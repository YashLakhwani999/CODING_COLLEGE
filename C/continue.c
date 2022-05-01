#include <stdio.h>
int main()
{
    int n, sum = 0;
    for (int i = 0; i <=4; i++)
    {
        printf("Enter the number : ");
        scanf("%d", &n);

        if (n < 0)
        {
            continue;
        }
        else if (n > 0)
        {
            sum = sum + n;
        }
    }
    printf("The sum of number is : %d.", sum);
    return 0;
}