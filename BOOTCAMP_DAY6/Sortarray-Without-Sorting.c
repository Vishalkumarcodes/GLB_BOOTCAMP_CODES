#include<stdio.h>
int main(){
    int arr[]={0,2,1,0,1,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int cnt0=0,cnt1=0,cnt2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            cnt0++;
        }
        else if(arr[i]==1){
            cnt1++;
        }
        else{
            cnt2++;
        }
    }
    for(int i=0;i<cnt0;i++){
        printf("0 ");
    }
    for(int i=cnt0;i<cnt0+cnt1;i++){
        printf("1 ");
     }
     for(int i=cnt0+cnt1;i<cnt0+cnt1+cnt2;i++){
        printf("2 ");
     }
    return 0;
}