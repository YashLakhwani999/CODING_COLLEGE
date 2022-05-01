#include <stdio.h>
int fibonacci(int n);
int main(){
    int a, c = 0;
    printf("Enter a number upto which you want a fibonacci series : ");
    scanf("%d",&a);
    for (int i = 0; i < a; i++)
    {
        printf("%d  ",fibonacci(c));
        c++;
    }
    return 0;
}
int fibonacci(n)
{   
    if (n == 0 || n == 1)
    {
        return n;
    }    
    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}