#include<stdio.h>
int main()
{
	int num1, num2, temp;
	printf("enter the 1st number:");
	scanf("%d", &num1);
	printf("enter the 2nd number:");
	scanf("%d", &num2);
	temp = num1; 
	num1 = num2;
	num2 = temp; 
	printf("num1:%d and num2:%d:", num1, num2);
	return 0;
}
