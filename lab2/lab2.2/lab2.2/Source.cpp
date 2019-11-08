#include<stdio.h>
void main()
{
	float a, b;
	printf("Vvedite koordinaty tochki\n");
	scanf_s("%f%f", &a, &b);
	if (a<1 && a>-1 && b > 0 && b < 1) printf("Tochka M naxoditsa v verxnei chasti edinichoi okruzhnosti\n");
	else printf("Tochka M ne naxoditsa v verxnei chasti edinichoi okruzhnosti\n");
	return 0;
}
