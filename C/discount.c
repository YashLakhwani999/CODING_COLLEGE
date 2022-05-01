#include<stdio.h>
int main()
{
    int items, price;
    printf("How many items you want : ");
    scanf("%d",&items);
    printf("Enter the base price : ");
    scanf("%d",&price);
    int amount = price * items;
    if (items > 100)    
    {
        int disc = amount * 0.10;
        amount = amount - disc;
        printf("Total amount that you have to pay for buying %d items is %d. ",items,amount);
    }
    else
    {
        printf("Total amount that you have to pay for buying %d items is %d. ",items,amount);
    }
    return 0;
}