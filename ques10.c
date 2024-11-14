#include<stdio.h>
int main(){

int n,i,m;
int count =0;
printf("enter the value of n");
scanf("%d",&n);
int arr[n];

printf("enter the values of array");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
    for(m=2;m<arr[i];m++){
        if(arr[i]%m==0){
            count++;
        }
    }
    

}
    printf("the total prime numbers in the array are:%d",count);



    return 0;
}