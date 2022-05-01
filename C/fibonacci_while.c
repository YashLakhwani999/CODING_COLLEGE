#include <stdio.h>
int main()
{
    int first = 0,second = 1,third = first + second,n;
    printf("Enter the number upto which you need fibonacci series : ");
    scanf("%d", &n);
    printf("0 ");
    while ((n-1) > 0)
    {
        first = second;
        second = third;
        third = first + second;
        printf("%d ", first);
        n = n -1;

    }
    return 0;
}