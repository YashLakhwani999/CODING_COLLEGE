#include <stdio.h>
int main()
{
    int x,y,z,sum;
    sum = 0;
    y = 1;
    z = 0;
    printf("Enter the number of terms : ");
    scanf("%d", &x);
    for ( y = 1; y < (x+1); y++)
    {   
        if (y > 3)
        {
            printf("Enter %dth number : ",y);
        }
        else if (y == 1)
        {
            printf("Enter %dst number : ",y);
        }
        else if (y == 2)
        {
            printf("Enter %dnd number : ",y);
        }
        else if (y == 3)
        {
            printf("Enter %drd number : ",y);
        }
        scanf("%d", &sum);
        z = z+sum;
    }
    float average = (float) z / x;
    printf("The sum of entered numbers is %d.\n",z);
    printf("The average of provided numbers is %f. ", average );
    return 0;
}