#include <stdio.h>
int main()
{
    int sum = 0,count = 0;
    for (int i = 100; i < 1001; i++)
    {
        if (i % 7 == 0)
        {
            printf("%d,",i);
            count += 1;
            sum += i;
        }
        
    }
    printf("\n\n\nThe numbers divisible by 7 are : %d\n",count);    
    printf("The sum of numbers are : %d.",sum);
    return 0;
}