#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main() {
	int A[4][4], P, sum, i, j;
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++)
		{
			A[i][j] = (rand() % 12) - 4;
			printf("%d ", A[i][j]);	
		}
		printf("\n");
	}

	for (i = 0; i < 4; i++) {
		P = 1;
		for (j = 0; j < 4; j++) {
			if (A[i][j] > 0) 
				P *= A[i][j];
				
		}
		printf("P = %d\n", P);
	}
	for (i = 0; i < 4; i++) {
		sum = 0;
		for (j = 0; j < 4; j++) {
			if(i == j)
			sum += A[i + 1][j];
		}
		printf("Sum equals = %d \n", sum);
	}

}