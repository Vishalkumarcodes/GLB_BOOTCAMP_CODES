#include<stdio.h>
void reverse(int arr[], int n){
    int low=0, high=n-1;
    while(low<high){
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
}
int main(){
    int arr[]={2,4,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
