#include<stdio.h>
void pattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
}
int main(){
    int  n;
    printf("Enter the Number =");
    scanf("%d",&n);
    pattern4(n);
    return 0;
}