#include<stdio.h>
void pattern6(int n){
    for(int i=1;i<n;i++){
        for(int j=n;j>i;j--){
            printf("%d",n-j+1);
        }
        printf("\n");
    }
}
int main(){
    int n;
    printf("Enetr the number =");
    scanf("%d",&n);
    pattern6(n);
    return 0;
}