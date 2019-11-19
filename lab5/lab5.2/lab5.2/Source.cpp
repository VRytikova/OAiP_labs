#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main() {
	int size = 4;
	int matr[4][4];
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; j++)
		{
			matr[i][j] = (rand() % 11) - 4;
			printf(" %d ", matr[i][j]);
		}
		printf( "\n");
	}

	for (int i = 0; i < 4; i++) {
		int P = 1;
		for (int j = 0; j < 4; j++) {
			if (matr[i][j] >= 0)
				P *= matr[i][j];
			else P = 0;
		}
		printf("P = %d\n", P);
	}
	int max = 0;
	for (int i = 1; i < size; ++i)
	{
		int index = i;
		int sum = 0;
		for (int j = 0; j < size; ++j)
		{

			printf( "matr[%d][%d]", index, j);
			
			sum += matr[index++][j];
		
			if (index == size)
				break;
			if (j != size - 1)
				printf(" + ");
		}
		printf( "= %d\n", sum);
		if (sum > max) max = sum;
	}
	/*printf("max = %d\n", max);*/

	int max1 = 0;
		for (int i = 2; i >= 0; i--)
		{
			int index = i;
			int sum1 = 0;
			for (int j = 3; j >=1 ; j--)
			{
				printf("matr[%d][%d]", index, j);

				sum1 += matr[index--][j];

				if (index < 0)
					break;

				if (index != 0)
					printf(" + ");
			}
			printf("= %d\n", sum1);
			if (sum1 > max1) max1 = sum1;
		}
	/*printf("max1 = %d\n", max1);*/

	if (max > max1) printf("The biggest sum equals %d\n", max);
	else printf("The biggest sum equals %d\n", max1);
	
}
