#include<stdio.h>
int main(){
    int x=0;

    int arr[5];
    printf("enter the array:");
    for(int i=0;i<=4;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=4;i++){
        if(arr[i]==99){
            
            x++;
            
        }
        

    }
    printf("%d",x);
    return 0;
}