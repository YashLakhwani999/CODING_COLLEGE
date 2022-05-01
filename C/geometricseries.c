#include <stdio.h>
#include <math.h>
int main()
{
    float x,r;
    int n;
    float sum = 0;
    printf("Enter first term of Geometric series : ");
    scanf("%f", &x);
    printf("Enter the number of terms : ");
    scanf("%d", &n);
    printf("Enter common difference : ");
    scanf("%f",&r);
    for (int i = 0; i < n; i++)
    {
        sum = sum + x;
        x = x * r;
    }

    printf("The geometric sum is %f . ",sum);
}