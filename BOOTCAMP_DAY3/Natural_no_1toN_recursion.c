#include<stdio.h>
void fun1(int n){
    if(n==0)
    {
        return; 
    }
    else{
        fun1(n-1);
        printf("%d ",n);
    }
        
}
int main(){
    int n;
    printf("Enter the num =");
    scanf("%d",&n);
    fun1(n);
    return 0;
}