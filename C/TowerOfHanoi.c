#include <stdio.h>

void Tower_Of_Hanoi(int n, char source, char destination,char auxilary)
{
    if (n == 1)
    {
        printf("Move Disc 1 from source %c to destination %c \n",source,destination);
        return;
    }
    Tower_Of_Hanoi(n-1,source,auxilary,destination);
    printf("Move Disk %d from source %c to destination %c \n",n,source,destination);
    Tower_Of_Hanoi(n-1,auxilary,destination,source);
    
}

int main()
{
    int n = 3;
    Tower_Of_Hanoi(n,'A','B','C');
    return 0;
}