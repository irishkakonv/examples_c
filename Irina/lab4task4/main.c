#include <stdio.h>
#include <string.h>
#include "struc.h"
#define SIZE 50

int main()
{
	int number = 0, i = 0;
	//char arr2 = {0};
	char *parr1[SIZE] = {0};
	//char *parr2[SIZE] = {0};
	//char arr[9] = { 0 };
	//char *a = arr;

	struct MYSTRUCTURA mystruct1 = {0};
	struct MYSTRUCTURA mystruct2 = {0};

	struct MYSTRUCTURA *pmystruct1 = &mystruct1;
	struct MYSTRUCTURA *pmystruct2= &mystruct2;
	puts("Enter the first string: ");
	fgets(mystruct1.arr, SIZE, stdin);
	//puts("Enter the second string: ");
	//fgets(pmystruct2->arr, SIZE, stdin);
	
	deleteZero1(&mystruct1);
	//deleteZero(pmystruct2->arr);

	mystruct1.count = strlen(mystruct1.arr);
	//pmystruct2->count = strlen(pmystruct2->arr);

	number = getWords(pmystruct1, parr1);
	
	//for (i = 0; i < number; i++)
	printWord(parr1, number);
	putchar('\n');
	return 0;





	return 0;
}