#include<stdio.h>
int OddoccuringNum(int arr[],int n){
    int res=arr[0];
    for(int i=1;i<n;i++){
        res=res^arr[i];
    }
    return res;
}
int main(){
    int arr[]={2,3,3,3,2,4,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    //OddoccuringNum(arr,n);
    int result=OddoccuringNum(arr,n);
    printf("%d",result);
    return 0; 
}