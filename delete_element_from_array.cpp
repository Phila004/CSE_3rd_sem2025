#include <stdio.h>
int main() 
{
    int arr[100], n, pos;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
    printf("Enter the position to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);
    if (pos < 0 || pos >= n) 
	{
        printf("Invalid position! Cannot delete.\n");
    } 
	else 
	{
        for (int i = pos; i < n - 1; i++) 
		{
            arr[i] = arr[i + 1];
        }
        n--; 
        printf("Array after deletion:\n");
        for (int i = 0; i < n; i++) 
		{
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
