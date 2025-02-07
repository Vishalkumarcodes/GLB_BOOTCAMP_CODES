#include<stdio.h>
int countsetBits(int n){
    int res=0;
    while(n>0){
        n = n&(n-1);
        res=res+1;
    }
    return res;
}
int main(){
    int n;
    printf("Enter the number=");
    scanf("%d",&n);
    countsetBits(n);
    int result=countsetBits(n);
    printf("%d",result);
    return 0;
}