#include<stdio.h>
int main(){
    int arr[5];
    printf("enter the marks:");
    for(int i=0;i<=4;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=4;i++){
        if(arr[i]>=75 &&arr[i]<=100){
            printf("\n your grade is 'A' " );
        }

        if(arr[i]>=60 &&arr[i]<75){
            printf("\n your grade is 'B' " );
        }

        if(arr[i]>=40 &&arr[i]<60){
            printf("\n your grade is 'C' " );
        }

        if(arr[i]>=0&&arr[i]<40){
            printf("\n your grade is 'D' " );
        }
        
    }
    return 0;
}