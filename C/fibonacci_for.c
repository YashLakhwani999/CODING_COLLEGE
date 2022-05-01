#include <stdio.h>

int main()
{
int first = 0,second = 1,n,third;
printf("Enter a number upto which you want a fibonacci series : ");
scanf("%d",&n);
printf("0 ");
for (int i = 0; i < n; i++)
{
    third = first + second;
    first = second;
    second = third;
    printf("%d ", first);
}
return 0;
}