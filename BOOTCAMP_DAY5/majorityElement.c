#include<stdio.h>
int majorityelement(int arr[], int n){
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>n/2){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    int arr[]={2,1,4,4,4,2,2,2,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("%d",majorityelement(arr,n));
    return 0;
}