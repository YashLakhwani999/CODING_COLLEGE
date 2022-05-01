#include <stdio.h>

int main(){
    int maths;
    int science;
    printf("\nEnter your marks in maths\t(OUT OF 100) : ");
    scanf("%d", &maths);
    if (maths > 100)
    {
        printf("Enter marks out of 100!!!\n\n");
    } 
    printf("Enter your marks in science\t(OUT OF 100) :");
    scanf("%d", &science);
    if (science > 100)
    {
        printf("Enter marks out of 100!!!\n\n");
    }
    
    if (maths >= 33 && maths <= 100){
        if (science >= 33 && science <= 100){
            printf("Congratulations!! You won 45 INR gift\t");
        }
        else{
            printf("Congratulations!! You won 15 INR gift\t");
        }
    }
    else if (science > 33 && science <= 100){
        printf("Congratulations!! You won 15 INR gift\t");
    }
    else{
        printf("Better luck next time.\t");
    }
    return 0;

}