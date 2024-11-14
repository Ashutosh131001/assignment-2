#include <stdio.h>
#include <limits.h>

int main() {
    int max = INT_MIN;  
    int min = INT_MAX;  
    int arr[5];

    printf("Enter the array: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];  
        }
        if (arr[i] < min) {
            min = arr[i];  
        }
    }

    printf("The max number is %d\n", max);
    printf("The min number is %d\n", min);

    return 0;
}
