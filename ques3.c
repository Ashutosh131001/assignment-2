#include<stdio.h>
int main(){
    int arr[5];
    printf("enter the array:");
    for(int i=0;i<=4;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=4;i++){
        if(arr[i]==99){
            printf(" the index %d has scored the 99 for the first time ",i);
            break;
        }
    }
    return 0;
}