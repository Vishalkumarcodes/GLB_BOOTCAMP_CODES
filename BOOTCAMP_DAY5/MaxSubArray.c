#include<stdio.h>
int subarray(int arr[],int n){
    int maxsum=arr[0];
    for(int i=0;i<n;i++){
        int currsum=0;
        for(int j=i;j<n;j++){
            currsum = currsum + arr[j];
        }
        if(currsum>maxsum){
            maxsum=currsum;
        }
    }
    return maxsum;
}
int main(){
    int arr[]={2,3,-8,7,-1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("%d",subarray(arr,n));
    return 0;
}