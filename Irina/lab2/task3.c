#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int size, i,j, space, star;
	star = 1;
	char arr[] = { ' ', '*' };
	puts("Enter an odd number: ");
	scanf("%i", &size); //wait enter

	space = (size - 1) / 2; //search count of ' '
	
	while (star <= size)
	{
		for (i = 0; i < (space); i++)
			printf("%c", arr[0]);
		for (j = 0; j < (star); j++)
			printf("%c", arr[1]);
		star = star + 2;
		for (i = 0; i < (space); i++)
			printf("%c", arr[0]);
		space--;
		if (space < 0)
		{
			puts(" ");
			break;
		}
		puts(" ");
	}

	return 0;
}