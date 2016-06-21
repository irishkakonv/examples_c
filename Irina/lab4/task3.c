#include <stdio.h>
#include <string.h>
#define N 100

void deleteZero(char *beginner);

int main()
{
	
	char arr[N] = { 0 };
	int lenarr;
	char *beginarr = {0};
	char *endarr[N] = {0};
	int count = 0, j, i = 0;

	puts("Enter text");
	fgets(arr, N, stdin);
	deleteZero(arr);
	lenarr = strlen(arr) - 1;
	beginarr = &arr[0];  // = arr;

	for (j = lenarr; j >= 0; j--)
		endarr[count++] = &arr[j];

	for (i = 0; i < (lenarr/2); i++)
	{
		if (*(beginarr + i) == *(endarr[i]))
			continue;		
		else
		{
			puts("It is not palindrom");
			return 0;
		}
	}
	puts("It is palindrom!");
	return 0;
}

void deleteZero(char *beginner)      //delete '\n' in  end of a string
{
	beginner[strlen(beginner) - 1] = '\0';
}