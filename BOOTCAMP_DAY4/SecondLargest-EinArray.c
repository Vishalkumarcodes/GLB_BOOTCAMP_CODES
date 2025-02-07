#include<stdio.h>
int getsecondlargest(int arr[], int n){
    int largest=-1, secondlargest=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>secondlargest && arr[i] != largest){
            secondlargest=arr[i];
        }
    }
    return secondlargest;
}
int main(){
    int arr[]={30,5,45,24,56,36};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("second largest = %d\n",getsecondlargest(arr, n));
}