#include <stdio.h>
int main() 
{
    char source[100], target[100];
    int i;
    printf("Enter the source string: ");
    gets(source); 
    for (i = 0; source[i] != '\0'; i++) 
	{
        target[i] = source[i];
    }
    target[i] = '\0'; 
    printf("Copied string in target: %s\n", target);
    return 0;
}
