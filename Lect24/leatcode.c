#include <stdio.h>

int main() {
    int arr[9] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int maxArea = 0;
    int i = 0;
    int j = 8;

    while (i < j) {
        int h = (arr[i] < arr[j]) ? arr[i] : arr[j];
        int w = j - i;
        int area = h * w;

        if (area > maxArea) {
            maxArea = area;
        }

        if (arr[i] < arr[j]) {
            i++;
        } else {
            j--;
        }
    }

    printf("%d\n", maxArea);
    return 0;
}