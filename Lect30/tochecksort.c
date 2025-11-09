#include <stdio.h>

int sort(int arr[], int i, int j)
{
    if (i >= j)
        return 1;
    if (arr[i] > arr[i + 1])
        return 0;
    return sort(arr, i + 1, j);
}

int main()
{
    int arr[3] = {1, 2, 3};
    int data = arr[2]; 
    printf("Last element: %d\n", data);

    int i = 0;
    int j = 2;
    int result = sort(arr, i, j);
    printf("Sorted: %s\n", result ? "Yes" : "No");

    return 0;
}