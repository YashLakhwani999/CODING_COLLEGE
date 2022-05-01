#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    if (a%2==0)
    {
        printf("The number entered is even .");
    }
    else
    {
        printf("The number entered is odd .");
    }
    return 0;
}