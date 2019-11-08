#include<stdio.h>
#include<math.h>
#include<conio.h>

void main() {
	int a = 401, n = 9, sum, k;
	for (a; a < 500; a++)
	{
		sum = (a / 100) + (a % 100) / 10 + (a % 10);
		if (sum == n) {
			k = 47 * ((a % 10) * 100 + ((a % 100)/10)*10 + (a / 100));
			if (a * 36 == k)
			{
				printf("%d \n", a);
			}
		}
	}
	return 0;
} 

