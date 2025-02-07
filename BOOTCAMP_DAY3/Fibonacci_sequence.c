// fibonacci sequence without using recursion
#include<stdio.h>
int main(){
    int n,a=0,b=1,c;
    printf("Enter the number=");
    scanf("%d",&n);
    printf("fibonacci series: %d, %d ",a ,b);
    for(int i=3;i<=n;i++){
        c=a+b;
        printf(",%d ",c);
        a=b;
        b=c;
    }
    return 0;
}
