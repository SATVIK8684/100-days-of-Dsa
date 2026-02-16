//Problem: Given a sorted array of n integers, remove duplicates in-place. Print only unique elements in order.
#include <stdio.h>

int main() {
    int n;

    // Input size of array
    scanf("%d", &n);

    int arr[n];

    // Input sorted array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Edge case: if array is empty
    if(n == 0) {
        return 0;
    }

    // Two-pointer approach
    int j = 0;  // Points to last unique element

    for(int i = 1; i < n; i++) {
        if(arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    // Print only unique elements
    for(int i = 0; i <= j; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
