#include<stdio.h>
int main(){
    int sum=0;
    int x;

    int arr[5];
    printf("enter the array:");
    for(int i=0;i<=4;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=4;i++){
        sum =sum+arr[i];
        
            
        }
        x=sizeof(arr)/sizeof(int);

        printf("%d",sum/x);
        return 0;
}