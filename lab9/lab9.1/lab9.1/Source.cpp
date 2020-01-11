//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//
//
//FILE* fp;
//FILE* fp1;
//FILE* fp2;
//FILE* fp3;
//int array[4] = { 12, 3, 67, 8 };
//
//void main() {
//	errno_t err;
//	err = fopen_s(&fp, "C:\\Users\\User\\Documents\\Projects\\OAiP\\lab9\\lab9.1\\NameA.txt", "r+b");
//	if (err == 0) printf("The file was opened\n");
//	else printf("The file was not opened\n");
//	//int t ;
//	if (fp != 0) {
//		fwrite(&array, sizeof(short), 4, fp);
//		while (!(fread(&array, sizeof(short), 4, fp)) == 0) break;
//		{
//			for (int i = 0; i < 4; i++) {
//				printf("%d", array[i]);
//			}
//		}
//	}
//	else printf("mistake\n");


	
	/*if (fp != 0) {
		while ((t = getc(fp)) != EOF)
		{
			putchar(fp);
		}

		err = fclose(fp);
	}
	else printf("MISTAKE\n");*/
//}

#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
int max(int a, int b)
{
	return a > b ? a : b;
}
int main() {
	int a, b, c;
	FILE* inA = fopen("C:\\Users\\User\\Documents\\Projects\\OAiP\\lab9\\lab9.1\\NameA.txt", "r");
	FILE* inB = fopen("C:\\Users\\User\\Documents\\Projects\\OAiP\\lab9\\lab9.1\\NameB.txt", "r");
	FILE* inC = fopen("C:\\Users\\User\\Documents\\Projects\\OAiP\\lab9\\lab9.1\\NameC.txt", "r");
	FILE* outD = fopen("C:\\Users\\User\\Documents\\Projects\\OAiP\\lab9\\lab9.1\\NameD.txt", "w");
	while (fscanf_s(inA, "%d", &a) > 0)
	{
		fscanf_s(inB, "%d", &b);
		fscanf_s(inC, "%d", &c);
		fprintf(outD, "%d ", max(max(a, b), c));
	}
	fclose(inA);
	fclose(inB);
	fclose(inC);
	fclose(outD);
	return 0;
}

