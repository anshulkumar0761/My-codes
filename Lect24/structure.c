// #include <stdio.h>
// #include <string.h> 

// struct Student {
//     char name[50];
//     int Rollno;
//     int age;
// };

// int main() {
//     struct Student s1;
//     s1.age = 15;
//     strcpy(s1.name, "NAshu"); 

//     printf("Age: %d\n", s1.age);
//     printf("Name: %s\n", s1.name);  

//     return 0;
// }








#include <stdio.h>
struct Student
{
    char name [20];
    int Rollno ; 
    float marks [20] ;
};

int main (){
struct Student S1 [5];
for (int i = 0; i < 5; i++)
{
    printf("Enter your name ");
    scanf("%s", S1[i].name);
    printf("Enter your Rollno");
    scanf("%d \t", &S1[i].Rollno);
    

}
printf("\n--- Student Records ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s\n", S1[i].name);
        printf("Rollno: %d\n", S1[i].Rollno);
        printf("Marks: %0.2f", S1[i].marks );


}
}