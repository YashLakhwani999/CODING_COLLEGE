#include<stdio.h>

int main()
{
    char a;
    float C;
    float F;
    printf("Enter y if you want to convert celcius to farenhiet or Enter n to convert Farenhiet to Celcius : ");
    scanf("%s" , &a);
    if (a == 'y')        
    {
        printf("Enter value in Celcius : ");
        scanf("%f" ,&C);
        F = ((C * (9.0/5.0)) + 32);
        printf("%f°F\n",F);

    }
    else{
        printf("Enter value in Farenhiet : ");
        scanf("%f", &F);
        C = (F - 32) * (5.0/9.0);
        printf("%f°C\n", C);
    }
    return 0;
}