//write the program to check if a number is positive, negative, or zero
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number = ");
    scanf("%d",&n);
    if(n==0){
        printf("Zero");
    }
    else if(n>0){
        printf("Positive number");
    }
    else{
        printf("Negative number");
    }
    return 0;
}