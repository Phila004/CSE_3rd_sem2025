#include <stdio.h>
int main() 
{
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int a[rows][cols], b[rows][cols], sum[rows][cols];
    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{	
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Resultant Matrix after Addition:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) 
		{
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
