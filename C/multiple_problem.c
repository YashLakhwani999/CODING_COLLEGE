#include <stdio.h>

int main()
{
    int n;
    printf("Enter (1) for converting kilometres to miles.\nEnter (2) for converting inches to foot.\nEnter (3) for converting cms to inches.\nEnter (4) for converting pound to kgs.\nEnter (5) for converting inches to meters.\n");
    printf("Enter any other number to exit.\n\n\n");
    label:
    printf("Enter any of the choice given above : ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("Enter Value for converting kms to miles : ");
        float km;
        scanf("%f", &km);
        float miles = (float)km / 1.6;
        printf("%f miles\n", miles);
        char c;
        printf("Do you want to do more conversions('y' to continue) : ");
        scanf("%s", &c);
        if (c == 'y')
        {
            goto label;
        }
        else
        {
            goto cargo;     
        }

        break;
    case 2:
        printf("Enter Value for converting inches to foot : ");
        float inches;
        scanf("%f", &inches);
        float foot = (float)inches / 12;
        printf("%f foot\n", foot);
        char c1;
        printf("Do you want to do more conversions('y' to continue) : ");
        scanf("%s", &c1);
        if (c1 == 'y')   
        {
            goto label;
        }
        else
        {
            goto cargo;     
        }    
        break;
    case 3:
        printf("Enter Value for converting cm to inches : ");
        float cm;
        scanf("%f", &cm);
        float inch = (float)cm / 2.54;
        printf("%f inches\n", inch);
        char c2;
        printf("Do you want to do more conversions('y' to continue) : ");
        scanf("%s", &c2);
        if (c2 == 'y')   
        {
            goto label;
        }
        else
        {
            goto cargo;     
        }
        break;
    case 4:
        printf("Enter Value for converting pound to kgs : ");
        float pound;
        scanf("%f", &pound);
        float kgs = (float)pound / 2.205;
        printf("%f Kilograms\n", kgs);
        char c3;
        printf("Do you want to do more conversions('y' to continue) : ");
        scanf("%s", &c3);
        if (c3 == 'y')   
        {
            goto label;
        }
        else
        {
            goto cargo;     
        }
        break;
    case 5:
        printf("Enter Value for converting inches to meters : ");
        float inc;
        scanf("%f", &inc);
        float m = (float)inc / 39.37;
        printf("%f meters\n", m);
        char c4;
        printf("Do you want to do more conversions('y' to continue) : ");
        scanf("%s", &c4);
        if (c4 == 'y')   
        {
            goto label;
        }
        else
        {
            goto cargo;     
        }
        break;
    default:
        cargo:
        printf("Code ended Succesfully");
        break;
    }
    return 0;
}