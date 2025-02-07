#include<stdio.h>
void porewof2(int n){
    if((n>0)&&(n&(n-1))==0){
        printf("Yes Power of 2");
    }
    else{
        printf("Not power of 2");
    }
}
int main(){
    int n;
    printf("Enter the number =");
    scanf("%d",&n);
    porewof2(n);
    return 0;
}