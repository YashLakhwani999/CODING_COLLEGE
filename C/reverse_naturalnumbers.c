#include <stdio.h>
int main()
{
    int count = 0;
    for (int i = 100; i > 0; i--)
    {
        printf("%d ",i);
        count = count + 1;
    }
    printf("\nTotal = %d.",count);
    return 0;
}