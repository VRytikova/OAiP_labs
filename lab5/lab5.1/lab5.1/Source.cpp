#include<stdio.h>
#include<conio.h>
#include<time.h>


void main() {
	float array[10][10], max, min, sum, hod;
	int n, m, minIndex, maxIndex;
	printf("Enter the number of strings\n");
	scanf_s("%d", &n);
	printf("Enter the number of columns\n");
	scanf_s("%d", &m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <m; j++)
		{
			array[i][j] =  rand() % 10;
			printf("%.2f ", array[i][j]);
		}
		printf("\n");
	}

	sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (i == j)
				sum += array[i][j];
		}
	}
	printf("Sum equals = %.2f \n", sum);

	for (int i = 0; i < n; i++) {
		minIndex = 0;
		min = array[i][0];
		maxIndex = 0;
		max = array[i][0];
		for (int j = 0; j < m; j++) {
			if (min > array[i][j]) {
				minIndex = j;
				min = array[i][j];

			}

			if (max < array[i][j]) {
				maxIndex = j;
				max = array[i][j];
			}
		}
		printf("Min equals %.2f \n", min);
		printf("Max equals %.2f \n", max);
		array[i][minIndex] = max;
		array[i][maxIndex] = min;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%.2f ", array[i][j]);
		}
		printf("\n");
	}
	
}