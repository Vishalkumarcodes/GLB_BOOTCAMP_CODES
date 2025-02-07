// Right angled number pyramid
#include<stdio.h>
void pattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}
int main(){
    int n;
    printf("Enter the Number =");
    scanf("%d",&n);
    pattern3(n);
    return 0;
}