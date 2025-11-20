#include <stdio.h>

int main() {
    // Initialize
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            // Swap if the current element is greater than the next
            if (arr[j] > arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }

    // Print the array
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}