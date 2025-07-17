#include <stdio.h>
int main() 
{
    char ch;
    printf("Enter a single alphabet character:");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
	{
        if (ch == 'a' || ch == 'A' ||
            ch == 'e' || ch == 'E' ||
            ch == 'i' || ch == 'I' ||
            ch == 'o' || ch == 'O' ||
            ch == 'u' || ch == 'U') {
            printf("You entered a vowel.\n");
        } 
		else 
		{	
            printf("You entered a consonant.\n");
        }
    } 
	else 
	{
        printf("That's not a valid alphabet character.\n");
    }
    return 0;
}
