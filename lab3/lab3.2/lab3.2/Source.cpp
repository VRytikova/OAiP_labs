#include<stdio.h>
#include<math.h>
#include<conio.h>

void main()
{
	int a = 1001, S, b, c, d, e;
	
	for (a; a > 1000 && a < 10000; a++)
	{
		b = a / 1000;
		c = (a % 1000) / 100;
		d = (a % 100) / 10;
		e = a % 10;
		S = b + c + d + e;
		if (a % 154 == 0 && S==30) {
			if (b == c && d == e) printf("a equal = %d", a);
			else if (b == e && d == c) printf("a equal = %d", a);
			else if (b == d && e == c) printf("a equal = %d", a);
			

		}
	}
	return 0;
}
