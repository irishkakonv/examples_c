#include <stdio.h>
#include <string.h>
#define N 100
#define IN 1
#define OUT 0

int main()
{
	char arr[N] = {0};
	char *parr[N] = {0};
	int count = 0, i, j = 0, flag = 0;

	fgets(arr, N, stdin);	//enter a string
	for (i = (strlen(arr) - 1); i >= 0; i--)
	{
		if (i == 0 && flag ==IN && arr[i] != ' ')
			parr[count] = &arr[i];
		if (flag == OUT && arr[i] == '\n')
			continue;
		if (flag == OUT && arr[i] != ' ')
			flag = IN;
		if (flag == IN && arr[i] != ' ')
			continue;
		if (flag == IN && arr[i] == ' ')
		{
			parr[count++] = &arr[i+1];
			flag = OUT;
		}
		
	}

	for (i = 0; i <= count; i++)
	{
		while (*(parr[i] + j) != ' ' && *(parr[i] + j) != '\n')
		{
			putchar(*(parr[i] + j));
			j++;
		}
		j = 0;
		puts(" ");
		
	}
	return 0;
}