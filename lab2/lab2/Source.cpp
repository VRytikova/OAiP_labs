#include<stdio.h>
#include <math.h>
#include <conio.h>
void main()
{
	float x, y, x1, y1, x2, y2, a, b, c;
	printf("Vvedite koordinaty 1 tochki\n");
	scanf_s("%f%f", &x, &y);
	printf("Vvedite koordinaty 2 tochki\n");
	scanf_s("%f%f", &x1, &y1);
	printf("Vvedite koordinaty 3 tochki\n");
	scanf_s("%f%f", &x2, &y2);
	a = sqrt(pow((x - x1), 2) + pow((y - y1), 2));
	b = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	c = sqrt(pow((x - x2), 2) + pow((y - y2), 2));

	float a1, b1, c1;
	if (a > b && a > c) {
		c1 = a;
		a1 = c;
		b1 = b;
	}
	else if (b > a && b > c) {
		c1 = b;
		a1 = a;
		b1 = c;
	}
	else
	{
		c1 = c;
		a1 = b;
		b1 = a;
	}

	if (pow(a1, 2) + pow(b1, 2) == pow(c1, 2)) {
		printf("Pryamoygol'ny\n");
	}
	else if (pow(a1, 2) + pow(b1, 2) > pow(c1, 2)) printf("Ostroygol'ny\n");
	else  printf("Typoygol'ny\n");
	return 0;
}
	
	