#include<stdio.h>
#include<stdlib.h>

void main() {
	long int *array, k;
	printf("Size of array = \n");
	scanf_s("%d", &k);

	array = (int*)malloc(k * sizeof(int));
	
	for (int i = 0; i < k; i++) {
		*(array+i) = (rand() % 10)-4;
	}

	for (int i = 0; i < k; i++) {
		printf("%d ", *(array+i));
	}

	int kolvo = 0;
	for (int i = 0; i < k; i++) {
		if (*(array+i) > 0) kolvo++;
	}
	printf("\n kolvo = %d\n", kolvo);

	int sum = 0;
	for (int i = 0; i < k; i++) {
		sum += *(array+i);
		if (*(array+i) == 0) 
			sum = 0;
	}
	printf("Sum = %d", sum);
	free(array);
}