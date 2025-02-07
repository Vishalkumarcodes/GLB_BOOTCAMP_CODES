#include<stdio.h>
int rearrange(int arry[],int n){
    int neg;
    int pos;                             //error in the code
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos=arr[i];
        }
        else{
            neg=arr[i]
        }
        for(int i=0;i<n/2;i++){
            arr[2*i]=pos[i];
             arr[2*i+1]=neg[i];
        }
    }
    return arr;
}
int main(){
    int n;
    int arr[n];
    printf("Enter the size of array=");
    scanf("%d",&n);
    printf("Enter the element on array=");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ans= rearrange(arr,n);
    for(int i=0;i<ans;i++){
        printf("%d ",ans[i]);
    }
    return 0;
}

