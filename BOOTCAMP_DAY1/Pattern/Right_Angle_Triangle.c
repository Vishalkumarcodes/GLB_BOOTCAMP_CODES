// Right Angle Triangle star pattern
#include<stdio.h>
void pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}
int main(){
    int n;
    printf("Enter the Number =");
    scanf("%d",&n);
    pattern2(n);
    return 0;
}