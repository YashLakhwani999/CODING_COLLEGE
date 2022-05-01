#include <stdio.h>
int fact(int n);

int main()
{
    int n;
    int ans;
    printf("Enter a number whose factorial you need : ");
    scanf("%d", &n);
    ans = fact(n);
    printf("factorial of given number is %d . ", ans);
    return 0;
}
int fact(n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}