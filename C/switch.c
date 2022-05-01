#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("enter age");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("Enter your marks");
        scanf("%d", &b);
        printf("age is 1");
        break;
    case 2:
        printf("age is 2");
        break;

    default:
        printf("age is niether 1 nor 2");
        break;
    }
}