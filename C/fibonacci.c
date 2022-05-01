#include<stdio.h>
int main()
{
    int first = 0;
    int second = 1;
    int third  = first + second;
    int n;
    printf("Enter a number upto which you want a fibonacci series : ");
    scanf("%d",&n);
    printf("0 ");
    if (n == 1)
    {
        printf("%d ",second);
    }
    else{
        for (int i = 1; i < n;i++)
        {
            first = second;
            second = third;
            third = first + second;

            printf("%d ", first);
        }
        
    }
    return 0;

}