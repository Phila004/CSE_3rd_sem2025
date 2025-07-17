#include <stdio.h>
int main() 
{
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr;
    int size = sizeof(arr) / sizeof(arr[0]);
    ptr = arr;
    printf("Array elements using pointer arithmetic:\n");
    for (int i = 0; i < size; i++)
	{
        printf("Value at ptr + %d = %d\n", i, *(ptr + i));
    }
    printf("\nDemonstrating pointer address movement:\n");
    for (int i = 0; i < size; i++) 
	{
        printf("Address of arr[%d] = %p | Pointer = %p\n", i, &arr[i], (ptr + i));
    }
    return 0;
}
