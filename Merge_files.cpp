#include <stdio.h>
#include <stdlib.h>
int main() 
{
    FILE *file1, *file2, *merged;
    char ch;
    file1 = fopen("file1.txt", "r");
    if (file1 == NULL) 
	{
        printf("Error opening file1.txt\n");
        return 1;
    }
    file2 = fopen("file2.txt", "r");
    if (file2 == NULL) {
        printf("Error opening file2.txt\n");
        fclose(file1);
        return 1;
    }
    merged = fopen("merged.txt", "w");
    if (merged == NULL) 
	{
        printf("Error creating merged.txt\n");
        fclose(file1);
        fclose(file2);
        return 1;
    }
    while ((ch = fgetc(file1)) != EOF) 
	{
        fputc(ch, merged);
    }
    while ((ch = fgetc(file2)) != EOF) 
	{
        fputc(ch, merged);
    }
    fclose(file1);
    fclose(file2);
    fclose(merged);
    printf("Files merged successfully into 'merged.txt'.\n");
    return 0;
}
