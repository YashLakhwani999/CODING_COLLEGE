#include<stdio.h>
int fibonacci(int n);
int main(){
    int a, b=0;
    int n ;
    printf("enter the number you want fibonacci ");
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        printf("%d \t",fibonacci(b));
        b++;
    }
    return 0;
}
int fibonacci(n){
    if (n==0||n==1){
        return n;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}