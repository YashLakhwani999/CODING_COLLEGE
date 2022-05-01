#include<stdio.h>
int main()
{
    int sum = 0;
    for (int i = 100; i <= 200; i++)
    {
        if (i%7==0 || i%9==0)
        {
            printf("%d ,",i);
            sum += i;
        }
        
    }
    printf("\n\n\n\nThe sum of numbers divisible by 7 or 9 is : %d\n",sum);
}