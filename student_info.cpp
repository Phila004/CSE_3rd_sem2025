#include <stdio.h>
struct Student 
{
    char name[50];
    int roll;
    float marks;
};
int main() 
{
    struct Student s;
    printf("Enter student name: ");
    gets(s.name); 
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("\n--- Student Information ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
    return 0;
}
