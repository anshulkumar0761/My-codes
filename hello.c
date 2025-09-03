#include <stdio.h>
int main() {
    int n ;
    int factorial , i;
    printf("Enter the number ");
    scanf("%d",&n);
        for (i = 1; i <= n; i++) {
            factorial = factorial*i;
        }
        printf("Factorial of %d = %d\n", n, factorial);
    
    return 0;
}