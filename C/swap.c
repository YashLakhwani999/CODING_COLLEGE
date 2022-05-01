#include <stdio.h>
void swap(int *a, int *b)
{
    int num;
    num = *a;
    *a = *b;
    *b = num;
}
int main()
{
    int a,b;
    printf("Enter 1st number : ");
    scanf("%d", &a);
    printf("Enter 2nd number : ");
    scanf("%d", &b);
    printf("The value of a and b before swap is --> %d and %d . \n",a,b);
    swap(&a,&b);
    printf("The value of a and b after swap is --> %d and %d . \n",a,b);
    return 0;
}