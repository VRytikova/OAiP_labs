
#include <stdio.h>        // подключаем заголовочный файл stdio.h
int main(void)                  // определяем функцию main
{
	int a, b, c, sum, S, V;
	printf("Vvedite dliny\n");
	scanf_s("%d", &a);
	printf("Vvedite shiriny\n");
	scanf_s("%d", &b);
	printf("Vvedite visoty\n");
	scanf_s("%d", &c);
	sum = a + b;
	S = (sum + a * b) * 2;
	V = a * b * c;
	printf("Ploschad ravna %d\n", S);
	printf("Ob'em raven %d\n", V);
	return 0;
}