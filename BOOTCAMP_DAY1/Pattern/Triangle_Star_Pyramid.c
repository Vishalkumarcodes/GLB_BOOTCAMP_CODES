#include<stdio.h>
void pattern7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(int j=0;j<2*i+1;j++){
            printf("*");
        }
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        printf("\n");
    }
}
int main(){
    int n;
    printf("Enetr the number =");
    scanf("%d",&n);
    pattern7(n);
    return 0;
}