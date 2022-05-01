#include <stdio.h>
int main(int argc, char *argv[])
{
    printf("Program name is : %s\n", argv[0]);

    if (argc < 2)
    {
        printf("No argument passed. \n");
    }

    else
    {
        printf("First arg is %s\n",argv[1]);
    }
}