#include<stdio.h>
    void pattern5(int n){
        for(int i=0;i<n;i++){
            for(int j=n;j>i;j--){
                printf("* ");
            }
        printf("\n");
        }
    }
int main(){
    int  n;
    printf("Enter the Number =");
    scanf("%d",&n);
    pattern5(n);
    return 0;
}