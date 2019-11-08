#include<stdio.h>
#include<conio.h>

void main(){
	int A[10], B[10], n=0, m=0, k, l, max, flag = 0;
	
	  printf("Size of array = \n");
	  scanf_s("%d", &k);
	   for (n; n < k; n++) {
		printf("Enter element %d of A\n", n);
		scanf_s("%d", &A[n]);
		max = A[0];
		if (A[n] > A[0]) max = A[n];
	   }
	
	  printf("Size of array = \n");
	  scanf_s("%d", &l);
	 for (m; m < l; m++) {
		  printf("Enter element %d of B\n", m);
		  scanf_s("%d", &B[m]);
		 


		  if (max == B[m]) flag = 1;
	  }

	  if (flag == 1) printf("Yes\n");
	  else if(flag == 0) printf("No\n");
	  return 0;
}
