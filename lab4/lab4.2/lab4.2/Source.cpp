#include<stdio.h>
#include<conio.h>
#include<math.h>


void main() {
	int mass[10],i = 0,sum=0, Kol = 0, k;
	printf("Size of array =\n");
	scanf_s("%d", &k);
	for (i = 0; i < k; i++) {
		printf("Enter element %d of mass \n", i + 1);
		scanf_s("%d", &mass[i]);
		if (mass[i] > 0)
			Kol++;
	}
	for (i = 0; i < k; i++) {
		sum += mass[i];
		if (mass[i] == 0) {
			sum = 0;
		}
	}
	
	printf("The number of elements is %d\n Sum equals %d\n", Kol, sum);
}

