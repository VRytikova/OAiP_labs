#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

float** Array;

int enter_array( int strings, int columns)
{
	int i, j;
	Array = (float**)malloc(strings * sizeof(int));
	for (i = 0; i < strings; i++) {
		Array[i] = (float*)calloc(columns, sizeof(int));
	}

	for (i = 0; i < strings; i++) {
		for (j = 0; j < columns; j++) {
			Array[i][j] = rand() % 12;
		}
	}
	/*	for (i = 0; i < strings; i++) {
			for (j = 0; j < columns; j++) {
				printf("%d ", *(*(Array+i)+j));
			}
			printf("\n");
		}*/
		
	return Array;
}
int task1(int strings, int columns){
	
	int index = 0;
	int kol = 0;
	for (int i = 0; i < strings; ++i) {

		for (int j = 0; j < columns; ++j) {

			if (*(*(Array + i) + j) == 0) kol++;
			if (kol == columns)
				index = i;
		}
	}
	printf("The number of string is %d\n", index);


	for (int i = 0; i < strings; i++) {
		float c = *(*(Array + i) + index) / 2;
		printf("%.2f\n", c);
		*(*(Array + i) + index) = c;
	}


	for (int i = 0; i < strings; i++) {
		for (int j = 0; j < columns; j++) {
			printf("%.2f ", *(*(Array + i) + j));
		}
		printf("\n");
	}
	
	return Array;
}

int output_array(int strings, int columns) {

	for (int i = 0; i < strings; i++) {
		for (int j = 0; j < columns; j++) {
			printf("%.2f ", *(*(Array + i) + j));
		}
		printf("\n");
	}

	return Array;
}

int array_of_strings() {
	char ch;
	char** array;
	int count = 0;
	int stringsize;
	scanf_s("%d", &stringsize);
	array = (char**)malloc(1024 * sizeof(char));
	for (int s = 0; s < stringsize; s++) {
		*(array + s) = (char*)calloc(1024, sizeof(char));
	}
	printf("Enter a sentence: ");
	for (int s = 0; s < stringsize; s++) {
		fgets(array[s], 1024, stdin);
	}

	printf("Enter a character: ");
	ch = getchar();

	/*int position = 0;*/
	for (int s = 0; s < stringsize; s++) {
		int position = 0;
		while (array[s][position] != 0)
		{
			if (array[s][position] == ch)
				count++;

			position++;
		}
	}
	fflush(stdin);

	printf("The character '%c' is in the sentence %d times.\n", ch, count);

	for (int s = 0; s <stringsize; s++) free(array[s]);
	free(array);
	return count;
}

int choise() {
	int choise;
	do {
		printf("Menu\n");
		printf("1. Enter new array\n");
		printf("2. Task 1\n");
		printf("3. Output of array\n");
		printf("4. Task 2\n");
		printf("5. Exit \n");
		printf("Choose\n");
		scanf_s("%d", &choise);
	} while (choise > 5);
	return choise;
}
void main() {
	int strings, columns, i, j;
	
	
	printf("Enter number of strings\n Enter number of columns\n");
	scanf_s("%d%d", &strings, &columns);
	float ** Array = enter_array(strings, columns);
	do {
		switch (choise())
		{
		case 1:
		{
			for (i = 0; i < strings; i++) {
				for (j = 0; j < columns; j++) {
					printf("%.2f ", *(*(Array + i) + j));
				}
				printf("\n");
			}
			break;
		}

		case 2:
		{
			task1(strings, columns);
			
			break;
		}
		case 3:
		{
			output_array(strings, columns);
			
			break;
		}
		case 4:
		{
			array_of_strings();
			break;
		}
		case 5: { 
			free(Array);
			return 0; }

		default: {
			break; }
		}
	} while (choise > 5);

}
