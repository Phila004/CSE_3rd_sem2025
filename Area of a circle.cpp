#include<stdio.h>
int main()
{
	float radius, area;
	float pi = 3.14;
	printf("Enter the radius of the circle:");
	scanf("%f", &radius);
	area = pi * radius * radius;
	printf("area:%f", area);
	return 0;
}
