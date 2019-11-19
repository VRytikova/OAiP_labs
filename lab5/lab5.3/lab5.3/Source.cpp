#include<stdio.h>
#include<conio.h>

void main() {
	float array[3][3] = {1,2,3,
					   0,0,0,
	                   0,0,0};
	
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			printf("%.2f ", array[i][j]);
		}
		printf("\n");
	}
	int index = 0;
	int kol = 0;
	for (int i = 0; i < 3; ++i) {
		
		for (int j = 0; j < 3; ++j) {

			if (array[i][j] == 0) kol++;
			if (kol == 3)
				index = i;
		}
	}
	printf("The number of string is %d\n",index);

		for (int j = 0; j < 3; j++) {
			float c = array[index - 1][j] / 2;
			printf("%.2f\n", c);
			array[index - 1][j] = c;
		}
		
	
	 
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%.2f ", array[i][j]);
		}
		printf("\n");
	}
}