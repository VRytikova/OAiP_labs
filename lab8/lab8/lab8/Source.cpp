#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct consumer
{
	char last_name[10];
	char name[20];
	char additionalname[20];
	char address[40];
	int mobile_phone;
	int credit_card;
};

struct consumer array[10];
struct consumer empty;
int n;
char search[10];
int search1;

int enter_array/*void main*/() {
	int i;
	scanf_s("%d", &n);

	for (i = 0; i < n; i++) {
		getchar();
		printf("Enter consumer's last name\n");
		fflush(stdin);
		fgets(array[i].last_name, 10, stdin);
		printf("Enter consumer's name\n");
		fflush(stdin);
		fgets(array[i].name, 20, stdin);
		printf("Enter consumer's additionalname\n");
		fflush(stdin);
		fgets(array[i].additionalname, 20, stdin);
		printf("Enter consumer's adress\n");
		fflush(stdin);
		fgets(array[i].address, 40, stdin);
		printf("Enter consumer's phone number\n");
		scanf_s("%d", &array[i].mobile_phone);
		printf("Enter consumer's credit card\n");
		scanf_s("%d", &array[i].credit_card);
		printf("\n");
	}
	return 0;
}

char find() {

	int param;

	printf("Enter parameter: \n");
	printf("1 - Last name\n");
	printf("2 - Name\n");
	printf("3 - AdditionalName\n");
	printf("4 - Adress\n");
	printf("5 - Phone Number\n");
	printf("6 - Credit card\n");

	scanf_s("%d", &param);
	if (param == 1) {
		getchar();
		printf("Enter the feature of search\n");
		fflush(stdin);
		fgets(search, 10, stdin);
		for (int i = 0; i < n; i++) {
			/*search == array[i].last_name;*/
			printf("%d\n", sizeof(array[i].last_name));
			printf("%d\n", sizeof(search));
			/*char x = (array[i].last_name - search);
				printf("%d\n", x);
				if (x == 0)*/
				//char str = *(array[i].last_name);
			int result = strcmp(array[i].last_name, search);
			printf("%d\n", result);
			if (0 == result)
				printf("%s\n %s\n %s\n %s\n %d\n %d\n", array[i].last_name, array[i].name, array[i].additionalname, array[i].address, array[i].mobile_phone, array[i].credit_card);

			else printf("No matches\n");

		}
	}

	if (param == 2) {
		getchar();
		printf("Enter the feature of search\n");
		fflush(stdin);
		fgets(search, 10, stdin);
		for (int i = 0; i < n; i++) {
			/*search == array[i].last_name;*/
			printf("%d\n", sizeof(array[i].name));
			printf("%d\n", sizeof(search));
			/*char x = (array[i].last_name - search);
				printf("%d\n", x);
				if (x == 0)*/
				//char str = *(array[i].last_name);
			int result = strcmp(array[i].name, search);
			printf("%d\n", result);
			if (0 == result)
				printf("%s\n %s\n %s\n %s\n %d\n %d\n", array[i].last_name, array[i].name, array[i].additionalname, array[i].address, array[i].mobile_phone, array[i].credit_card);

			else printf("No matches\n");

		}
	}

	if (param == 3) {
		getchar();
		printf("Enter the feature of search\n");
		fflush(stdin);
		fgets(search, 10, stdin);
		for (int i = 0; i < n; i++) {
			/*search == array[i].last_name;*/
			printf("%d\n", sizeof(array[i].additionalname));
			printf("%d\n", sizeof(search));
			/*char x = (array[i].last_name - search);
				printf("%d\n", x);
				if (x == 0)*/
				//char str = *(array[i].last_name);
			int result = strcmp(array[i].additionalname, search);
			printf("%d\n", result);
			if (0 == result)
				printf("%s\n %s\n %s\n %s\n %d\n %d\n", array[i].last_name, array[i].name, array[i].additionalname, array[i].address, array[i].mobile_phone, array[i].credit_card);

			else printf("No matches\n");

		}
	}

	if (param == 4) {
		getchar();
		printf("Enter the feature of search\n");
		fflush(stdin);
		fgets(search, 10, stdin);
		for (int i = 0; i < n; i++) {
			/*search == array[i].last_name;*/
			printf("%d\n", sizeof(array[i].address));
			printf("%d\n", sizeof(search));
			/*char x = (array[i].last_name - search);
				printf("%d\n", x);
				if (x == 0)*/
				//char str = *(array[i].last_name);
			int result = strcmp(array[i].address, search);
			printf("%d\n", result);
			if (0 == result)
				printf("%s\n %s\n %s\n %s\n %d\n %d\n", array[i].last_name, array[i].name, array[i].additionalname, array[i].address, array[i].mobile_phone, array[i].credit_card);

			else printf("No matches\n");

		}
	}

	if (param == 5) {
		printf("Enter the feature of search\n");
		scanf_s("%d", &search1);
		for (int i = 0; i < n; i++) {
			if (array[i].mobile_phone == search1) printf("%s\n%s\n%s\n%s\n%d\n%d\n", array[i].last_name, array[i].name, array[i].additionalname, array[i].address, array[i].mobile_phone, array[i].credit_card);
			else printf("No matches\n");
		}
	}

	if (param == 6) {
		printf("Enter the feature of search\n");
		scanf_s("%d", &search1);
		for (int i = 0; i < n; i++) {
			if (array[i].credit_card == search1) printf("%s\n %s\n %s\n %s\n %d\n %d\n", array[i].last_name, array[i].name, array[i].additionalname, array[i].address, array[i].mobile_phone, array[i].credit_card);
			else printf("No matches\n");
		}
	}
	return 0;
}


int sorting() {

	for (int i = 0; i < (n - 1); i++) {
		for (int j = i; j < n; j++) {
			if (strcmp(array[i].last_name, array[j].last_name) > 0) {
				struct consumer k = array[i];
				array[i] = array[j];
				array[j] = k;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		printf("Consumer #%d\n", i);
		printf("%s\n %s\n %s\n %s\n %d\n %d\n", array[i].last_name, array[i].name, array[i].additionalname, array[i].address, array[i].mobile_phone, array[i].credit_card);
	}
	return 0;
}

int change_structure() {
	int i, sw;
	printf("Enter the number of structure\n");
	scanf_s("%d", &i);
	do {
		printf("enter 1 in order to change last name\n");
		printf("enter 2 in order to change name\n");
		printf("enter 3 in order to change additional name\n");
		printf("enter 4 in order to change address\n");
		printf("enter 5 in order to change phone number\n");
		printf("enter 6 in order to change credit card\n");
		scanf_s("%d", &sw);
		switch (sw) {
		case 1:
			getchar();
			printf("Enter new last name\n");
			fflush(stdin);
			fgets(array[i].last_name, 10, stdin);
			break;
		case 2:
			getchar();
			printf("Enter new name\n");
			fflush(stdin);
			fgets(array[i].name, 20, stdin);
			//printf("%s\n %s\n %s\n %s\n %d\n %d\n", array[i].last_name, array[i].name, array[i].additionalname, array[i].address, array[i].mobile_phone, array[i].credit_card);
			break;
		case 3:
			getchar();
			printf("Enter new additional name\n");
			fflush(stdin);
			fgets(array[i].additionalname, 20, stdin);
			break;

		case 4:
			getchar();
			printf("Enter new address\n");
			fflush(stdin);
			fgets(array[i].address, 10, stdin);
			break;

		case 5:
			printf("Enter new mobile phone\n");
			scanf_s("%d", &array[i].mobile_phone);
			break;

		case 6:
			printf("Enter new credit card\n");
			scanf_s("%d", &array[i].credit_card);
			break;
		}
	} while (sw < 7);
	//printf("%s\n %s\n %s\n %s\n %d\n %d\n", array[i].last_name, array[i].name, array[i].additionalname, array[i].address, array[i].mobile_phone, array[i].credit_card);
	return 0;
}

int delete_structure() {
	int del;
	printf("Enter the number of note that must be deleted\n");
	printf("If u want delete all notes enter '15'\n");
	scanf_s("%d", &del);
	if (del != 15) {

		for (int i = del; i < n; i++) {
			array[del] = array[del + 1];
			n = n - 1;
		}
		for (int i = 0; i < n; i++)
			printf("%s\n %s\n %s\n %s\n %d\n %d\n", array[i].last_name, array[i].name, array[i].additionalname, array[i].address, array[i].mobile_phone, array[i].credit_card);

	}
	if (del == 15) {
		for (int i = 0; i < n; i++) {
			array[i] = empty;
			n = 0;
		}
	}
	return 0;
}

int structure_out() {
	for (int i = 0; i < n; i++) {
		printf("%s\n", array[i].last_name);
		printf("%s\n", array[i].name);
		printf("%s\n", array[i].additionalname);
		printf("%s\n", array[i].address);
		printf("%d\n", array[i].mobile_phone);
		printf("%d\n", array[i].credit_card);
	}
	return 0;
}

int menu() {
	int choice;
	do {
	 printf("1-enter array of structure\n");
	 printf("2-sort array of structure\n");
	 printf("3-search in array of structure\n");
	 printf("4-change array of structure\n");
	 printf("5-delete array of structure\n");
	 printf("6-out array of structure\n");
	 printf("7-exit\n");
	
     scanf_s("%d", &choice);
	
		switch (choice) {
		case 1:
			enter_array();
			break;
		case 2:
			sorting();
			break;
		case 3:
			find();
			break;
		case 4:
			change_structure();
			break;
		case 5:
			delete_structure();
			break;
		case 6:
			structure_out();
			break;
		case 7: break;
		}
	} while (choice < 7);
	return 0;
}

void main() {
	menu();
}