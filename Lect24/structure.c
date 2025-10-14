#include <stdio.h>
#include <string.h>  // Needed for strcpy

struct Student {
    char name[50];
    int Rollno;
    int age;
};

int main() {
    struct Student s1;
    s1.age = 15;
    strcpy(s1.name, "NAshu"); 

    printf("Age: %d\n", s1.age);
    printf("Name: %s\n", s1.name);  

    return 0;
}