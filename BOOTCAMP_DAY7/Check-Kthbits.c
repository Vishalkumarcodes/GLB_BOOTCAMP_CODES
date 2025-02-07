#include<stdio.h>
void checkbit(int n,int k){       //Left shift
    if(n&(1<<k-1)){
        printf("set");
    }
    else{
        printf("Not set");
    }
}
void checkbitRight(int n,int k){      //Right shift
    if(1>>(k-1)&1){
        printf("set");
    }
    else{
        printf("Not set");
    }
}
int main(){
    int n,k;
    printf("enter the number=");
    scanf("%d",&n);
    printf("Enter the position =");
    scanf("%d",&k);
    //+checkbit(n,k);
    checkbitRight(n,k);
}