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
	a = sqrt(pow((x - x1), 2.) + pow((y - y2), 2.));
	b = sqrt(pow((x1 - x2), 2.) + pow((y1 - y2), 2.));
	c = sqrt(pow((x - x2), 2.) + pow((y - y2), 2.));
	if (c > a, c > b) {
		if (pow(a, 2.) + pow(b, 2.) == pow(c, 2.)) {
			printf("Pryamoygol'ny\n");
		}
		else if (pow(a, 2.) + pow(b, 2.) > pow(c, 2.)) printf("Ostroygol'ny\n");
		else  printf("Typoygol'ny\n");
		return 0;
	}
	else if (a > b, a > c) {
		if (pow(b, 2.) + pow(c, 2.) == pow(a, 2.)) {
			printf("Pryamoygol'ny\n");
		}
		else if (pow(c, 2.) + pow(b, 2.) > pow(a, 2.)) printf("Ostroygol'ny\n");
		else  printf("Typoygol'ny\n");
		return 0;
	}
	else {
		if (pow(a, 2.) + pow(c, 2.) == pow(b, 2.)) {
			printf("Pryamoygol'ny\n");
		}
		else if (pow(c, 2.) + pow(a, 2.) > pow(b, 2.)) printf("Ostroygol'ny\n");
		else  printf("Typoygol'ny\n");
		return 0;

	}
}
	
	