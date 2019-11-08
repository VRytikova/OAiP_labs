#include<stdio.h>
void main()
{
	int a, b, n;
	printf("Menu:\n");
	printf("1-podschet sum 2 chisel\n");
	printf("2 - podschet raznosti 2 chisel\n");
	printf("3 - podschet proizvedeniya 2 chisel\n");
	printf("4 - podschet chastnogo 2 chisel\n");
	printf("Vash vybor?\n");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:
		scanf_s("%d%d", &a, &b);
		printf("Sum ravna %d\n", a + b);
		break;
	case 2:
		scanf_s("%d%d", &a, &b);
		printf("Raznost ravna %d\n", a - b);
		break;
	case 3:
		scanf_s("%d%d", &a, &b);
		printf("Proizvedenie ravno %d\n", a * b);
		break;
	case 4:
		scanf_s("%d%d", &a, &b);
		printf("Chastnoe ravno %d\n", a / b);
		break;
	default: printf("Nevernoe znachenie");
		
	}
	
	return 0;

}