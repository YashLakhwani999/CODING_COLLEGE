#include <stdio.h>
void sum()
{
    static int a = 0;
    a = a + 1;
    printf("%d\n",a);
}
int main()
{
    for (int i = 0; i < 3; i++)
    {
        sum();
    }
    return 0;
}