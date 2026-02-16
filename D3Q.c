#include <stdio.h>

int main() {
    int n;

    // Input size of array
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    // Input key to search
    scanf("%d", &k);

    int comparisons = 0;
    int found = -1;

    // Linear Search
    for(int i = 0; i < n; i++) {
        comparisons++;   // Count comparison
        if(arr[i] == k) {
            found = i;
            break;
        }
    }

    if(found != -1) {
        printf("Element found at position %d\n", found + 1);  // 1-based position
    } else {
        printf("Element not found\n");
    }

    printf("Number of comparisons: %d\n", comparisons);

    return 0;
}
