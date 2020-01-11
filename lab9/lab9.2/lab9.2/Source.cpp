#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>

int menu();
void fun_1();
void fun_2();
void fun_3();
int ch;



struct airline
{
	int number, cost;
	char destination[20];
	double time, date;
};

struct airline inf;
FILE* f;

int main()
{
	do
	{
		switch (menu())
		{
		case 1:
			fun_1(); break;
		case 2:
			fun_2(); break;
		case 3:
			fun_3(); break;
		}
	} while (ch < 4);
}

int menu()
{
	
	do {
		printf("\n   Menu: \n");
		printf("1) Add\n");
		printf("2) Print\n");
		printf("3) Search\n");
		printf("\t Your choice: ");
		scanf_s("%d", &ch);
	} while (ch > 3);
	return ch;
}

void fun_1()
{
	f = fopen("inf.dat", "a+b");
	if (!f)
	{
		printf("File Error\n");
		return;
	}

	while (true)
	{
		printf("number (-1 for exit)\n");
		scanf_s("%d", &inf.number);
		if (inf.number == -1) break;
		getchar();
		printf("destination\n");
		gets_s(inf.destination);
		printf("time\n");
		scanf_s("%lf", &inf.time);
		printf("date\n");
		scanf_s("%lf", &inf.date);
		printf("cost\n");
		scanf_s("%d", &inf.cost);
		printf("\n");
		fwrite(&inf, 1, sizeof(inf), f);
	}
	fclose(f);
}

void fun_2()
{
	f = fopen("inf.dat", "r+b");
	if (!f)
	{
		printf("File Error\n");
		return;
	}

	while (true)
	{
		fread(&inf, sizeof(inf), 1, f);
		if (feof(f)) break;
		printf("\n number %d\n", inf.number);
		printf("destination %s\n", inf.destination);
		printf("time %.2lf\n", inf.time);
		printf("date %.2lf\n", inf.date);
		printf("cost %d\n", inf.cost);
		printf("\n");
	}
	fclose(f);
}

void fun_3()
{
	f = fopen("inf.dat", "r+b");
	if (!f)
	{
		printf("File Error\n");
		return;
	}

	int num;
	puts("number: ");
	scanf_s("%d", &num);
	bool y = false;

	while (true)
	{
		fread(&inf, sizeof(inf), 1, f);
		if (feof(f)) break;
		if (num == inf.number)
		{
			printf("-------------------------------------\n");
			printf("number %d\n", inf.number);
			printf("destination %s\n", inf.destination);
			printf("time %.2lf\n", inf.time);
			printf("date %.2lf\n", inf.date);
			printf("cost %d\n", inf.cost);
			printf("-------------------------------------\n");
			y = true;
		}
	}

	if (!y) { puts("Not found.\n"); }

	fclose(f);
}
