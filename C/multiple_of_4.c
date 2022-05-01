#include <stdio.h>

int main(){
    int i;
    int n;
    int b;
    n = 100;
    i = 1;
    while (i <= n){
        if (i%4 == 0){
            printf("%i\n",i);
        }
        i = i + 1;
    } 
    return 0;
}