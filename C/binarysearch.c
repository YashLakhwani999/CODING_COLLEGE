#include <stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int arraySize = sizeof(arr);
    int intSize = sizeof(arr[0]);
    int length = (int)arraySize/intSize;
    printf("%d", length);
    return 0;
}