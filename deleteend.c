#include <stdio.h>

int main() {
    int arr[100];  
    int n;         

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    if (n > 0) {
    
        n--;
    }


    printf("Array after deleting the last element:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}