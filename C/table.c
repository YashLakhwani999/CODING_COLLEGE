#include <stdio.h>

int main(){
    int a;
    int b;
    int i;
    b = 10;
    i = 1;
    printf("Enter a number for which you need a table: ");
    scanf("%d", &a);
    while (i<=b){
        printf("%d x %d = %d\n",a,i,a*i);
        i = i + 1;
    }
    return 0;
}