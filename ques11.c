#include<stdio.h>
int main(){
    int count=0;
    int n;
    printf("enter n");
    scanf("%d",&n);

    int arr[n];
    printf("enter the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int last = arr[n-1];

    for(int i=n;i>0;i--){
        arr[i]=arr[i-1];
       
       }

       arr[0]=80;
        

        printf("array after cyclic rotation");
        for(int i=0;i<=n;i++){
            printf("%d ",arr[i]);
        }

return 0;
}