#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    int windowsum = 0;
    for (int i = 0; i < k; i++) {
        windowsum += arr[i];
    }

    int maxsum = windowsum;
    for (int l = k; l < n; l++) {
        windowsum = windowsum + arr[l] - arr[l - k];
        if (windowsum > maxsum) {
            maxsum = windowsum;
        }
    }

    printf("Maximum sum of subarray of size %d is: %d\n", k, maxsum);
    return 0;
}