#include<stdio.h>
int getLargesr(int arr[], int n){
    int res=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[res]){
            res=i;
        }
    }
    return arr[res];
}
int main(){
    int arr[]={2,24,34,56,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Largest element =%d",getLargesr(arr, n));
}