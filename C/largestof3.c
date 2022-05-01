#include <stdio.h>
int main(){
    int x,y,z;
    printf("Enter first number : ");
    scanf("%d", &x);
    printf("Enter second number : ");
    scanf("%d", &y);
    printf("Enter third number : ");
    scanf("%d", &z);
    if (x > y && x > z)
    {
        printf("The largest number in %d, %d and %d is %d.",x,y,z,x);
    }
    else if (y > z && y > x)
    {
        printf("The largest number in %d, %d and %d is %d.",x,y,z,y);
    }
    else
    {
        printf("The Largest number in %d, %d and %d is %d.",x,y,z,z);
    }
    return 0;
} 