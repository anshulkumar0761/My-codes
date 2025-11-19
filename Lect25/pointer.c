                                    // POINTERS 
#include <stdio.h>

int main() {
    int num = 10;         //  integer variable
    int *ptr;             // Declare a pointer to an integer

    ptr = &num;           // Store the address 
    printf("Value of num : %d\n", num);
    printf("Address of num : %p\n", &num);
    printf("Value stored in ptr (address of num) : %p\n ", ptr);
    printf("Value pointed to by ptr : %d\n ", *ptr); 
    return 0;
}