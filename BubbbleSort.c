#include <stdio.h>

int main() {
    int temp;
    int arr[5] = {2, 4, 1, 6, 5};
    int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
        printf("%d\t", arr[i]);

    return 0;
}