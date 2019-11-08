#include<stdio.h>
#include<conio.h>

void main() {
	float array[10], sum = 0, P = 1, max, min;
	int  n, mx, mn;
	printf("Enter the size of array\n");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("Enter the %d element of array\n", i+1);
		scanf_s("%f", &array[i]);
	}
	min = array[0];
	max = array[0];
	mx = 0;
	mn = 0;
	for (int i = 0; i < n; i++) {
		sum += array[i];
		P *= array[i];

		if (min > array[i]) {
			min = array[i];
			mn = i;
		}
		if (max < array[i]) {
			max = array[i];
			mx = i;
		}
	}
	printf("Sum equals = %f \n P equals = %f\n min equals = %f\n max equals = %f\n", sum, P, min, max);

	float t;
	t = array[mn];
	array[mn] = array[mx];
	array[mx] = t;
	for (int i=0; i < n; i++) {
		printf("%f\n", array[i]);
	}


}