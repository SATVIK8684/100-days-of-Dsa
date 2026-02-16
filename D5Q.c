//Problem: A system receives two separate logs of user arrival times from two different servers. Each log is already sorted in ascending order. Your task is to create a single chronological log that preserves the correct order of arrivals.
#include <stdio.h>

int main() {
    int n1, n2;

    // Input size of first log
    scanf("%d", &n1);
    int log1[n1];

    // Input first log
    for(int i = 0; i < n1; i++) {
        scanf("%d", &log1[i]);
    }

    // Input size of second log
    scanf("%d", &n2);
    int log2[n2];

    // Input second log
    for(int i = 0; i < n2; i++) {
        scanf("%d", &log2[i]);
    }

    int merged[n1 + n2];

    int i = 0, j = 0, k = 0;

    // Merge both logs
    while(i < n1 && j < n2) {
        if(log1[i] <= log2[j]) {
            merged[k++] = log1[i++];
        } else {
            merged[k++] = log2[j++];
        }
    }

    // Copy remaining elements of log1
    while(i < n1) {
        merged[k++] = log1[i++];
    }

    // Copy remaining elements of log2
    while(j < n2) {
        merged[k++] = log2[j++];
    }

    // Print merged log
    for(int x = 0; x < n1 + n2; x++) {
        printf("%d ", merged[x]);
    }

    return 0;
}
