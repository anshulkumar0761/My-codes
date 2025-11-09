

#include <stdio.h>
int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return (n * fact(n - 1));
}

int main()
{
    int data = fact(5);
    printf("Factorial of 10 is: %d\n", data);
    return 0;
}