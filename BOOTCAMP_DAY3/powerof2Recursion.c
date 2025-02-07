#include<stdio.h>
int power2(int n){
    if(n==0){
        return 1;
    }
    else{
         return 2*power2(n-1);
         //printf("%d",n);
    }
}
int main(){
    int n;
    printf("Enter the number =");
    scanf("%d",&n);
   int result = power2(n);
   printf("%d",result);
   return 0;
}