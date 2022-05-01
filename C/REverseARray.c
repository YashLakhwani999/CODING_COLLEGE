#include <stdio.h>
void revarr(int array[])
{
    int temp;
    for (int i = 0; i < 7 / 2; i++)
    {
        temp = array[i];
        array[i] = array[6 - i];
        array[6 - i] = temp;
    }
}
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    printf("The array given was : ");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }

    revarr(arr);
    printf("\nThe reversed array is : ");
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
