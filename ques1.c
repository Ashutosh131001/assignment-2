#include<stdio.h>
void main(){
    int arr[5];
    printf("enter the array:");
    for(int i=0;i<=4;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=4;i++){
        printf("%d ",arr[i]+5);
    }
    ;
}