#include <stdio.h>
int main() 
{
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols], transpose[cols][rows];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose of the Matrix:\n");
    for (int i = 0; i < cols; i++) 
	{
        for (int j = 0; j < rows; j++) 
		{
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
