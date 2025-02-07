#include<stdio.h>
int isSorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return 0;
        }
        else{
            return 1;
        }
    }
}
int main(){
    int arr[]={4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    if (isSorted(arr, n)) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }

    return 0;
}