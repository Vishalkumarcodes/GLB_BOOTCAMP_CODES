#include<stdio.h>
void TwoOddppearingNum(int arr[],int n){
    int x=arr[0];
    for(int i=1;i<n;i++)
     x = x^arr[i];
    int y = (x&(-x));
    int ans1=0,ans2=0;
    for(int i=1;i<n;i++){
        if(arr[i]&y!=0){
            ans1=ans1^arr[i];
        }
        else{
            ans2=ans2^arr[i];
        }
    }
    printf("%d %d",ans1,ans2);
}
int main(){
    int n;
    printf("Enter the size of Array =");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element =");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    TwoOddppearingNum(arr,n);
    //printf("%d",result);
    return 0;
}