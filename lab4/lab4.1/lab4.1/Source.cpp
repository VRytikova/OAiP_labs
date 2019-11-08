#include<stdio.h>
#include<conio.h>
#include <malloc.h>
#include <stdlib.h>

int main() {
	float *mass;
	int n;
	printf("Size of array =\n");
	scanf_s("%d", &n);
    mass = malloc(n * sizeof(float));
	int  i = 0;
	float sum = 0, P = 1;
	float min = mass[0], max = mass[0];
	printf("Enter mass's elements\n");
	for (i; i < n; i++) {
		printf("Number %d equal\n", i + 1);
		scanf_s("%f", &mass[i]);
	
			sum += mass[i];
			P *= mass[i];

			if (mass[i] < min) min = mass[i];

			if (mass[i] > max) max = mass[i];
		}
	printf("Sum equals = %.3f\n P equals = %.3f\n", sum, P);
	printf("min element equals = %.3f\n", min);
	printf("max element equals = %.3f\n", max);

	free (mass); 

	return;
}