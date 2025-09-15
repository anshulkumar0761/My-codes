#include <stdio.h>

int main() {
    int size, i, j;
    printf("Enter the lines : ");
    scanf("%d", &size);
    for (i = 1; i <= size; i++) {
        for (j = 1; j <= size; j++) {
            if (i == j || i + j == size + 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}