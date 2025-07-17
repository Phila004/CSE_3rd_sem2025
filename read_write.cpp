#include <stdio.h>
int main() 
{
    FILE *file;
    char name[50];
    int age;
    file = fopen("data.txt", "w"); 
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    printf("Enter your name: ");
    gets(name);  
    printf("Enter your age: ");
    scanf("%d", &age);
    fprintf(file, "%s %d\n", name, age);
    fclose(file); 
    file = fopen("data.txt", "r"); 
    if (file == NULL) 
	{
        printf("Error opening file for reading.\n");
        return 1;
    }
    printf("\nReading data from file...\n");
    fscanf(file, "%s %d", name, &age); 
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    fclose(file); 
    return 0;
}
