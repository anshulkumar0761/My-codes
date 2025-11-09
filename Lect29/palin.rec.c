
#include <stdio.h>

int palindrome(int arr[], int i, int j) {
    if (i >= j)
        return 1;
    if (arr[i] == arr[j])
        return palindrome(arr, i+1 , j-1);
    else
        return 0;
}

int main() { 
    int arr[3]={1,2,1};
    int i = 0;
    int j = 2;

    if (palindrome(arr, i, j))
        printf("The array is a palindrome.\n");
    else
        printf("The array is not a palindrome.\n");

    return 0;
}