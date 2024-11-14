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
       if(arr[i]%2==0){
        printf("score is even \n");

       }
       else{
        printf("your score is odd \n");
       }
        
}
return 0;
}