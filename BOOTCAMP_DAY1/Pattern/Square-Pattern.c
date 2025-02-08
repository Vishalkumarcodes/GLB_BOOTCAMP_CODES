#include<stdio.h>
void pattern8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    int n;
    printf("Enetr the number =");
    scanf("%d",&n);
    pattern8(n);
    return 0;
}