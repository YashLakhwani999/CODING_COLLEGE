#include <stdio.h>
#include <string.h>

struct travelagency
{
    char Name[50];
    int DL_No;
    char route[50];
    float kms;
};

int main()
{
    struct travelagency;
    int n;
    printf("How many drivers you have currently : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter your details -->\n ");
        int DL;char Name;char route;float km;
        printf("Enter your First Name : ");
        scanf("%s",&Name);
        printf("Enter your Driving Licence Number : ");
        scanf("%d", &DL);
        printf("Enter on which route you are currently : ");
        scanf("%s", &route);
        printf("How much km you have driven your vehicle : ");
        scanf("%f", &km);
    }
    
    
}