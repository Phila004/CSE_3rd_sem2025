#include <stdio.h>
int main() 
{
    int arr[100], n, pos, value;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
    printf("Enter the value to insert: ");
    scanf("%d", &value);
    printf("Enter the position (0 to %d): ", n);
    scanf("%d", &pos);
    if (pos < 0 || pos > n) 
	{
        printf("Invalid position! Cannot insert.\n");
    } else {
        for (int i = n; i > pos; i--) 
		{
            arr[i] = arr[i - 1];
        }
        arr[pos] = value;
        n++;
        printf("Array after insertion:\n");
        for (int i = 0; i < n; i++) 
		{
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
