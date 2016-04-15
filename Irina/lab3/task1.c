#include <stdio.h>
#include <string.h>
#define IN 1
#define OUT 0
#define SIZE 100


int main()
{
	char arr[SIZE];
	int flag;
	int count = 0;
	flag = OUT;

	fgets(arr, SIZE, stdin);
	for (int i = 0; i < (strlen(arr)); i++)
	{
		if (arr[i] != ' ' && flag == OUT)
		{
			flag = IN;
			continue;
		}

		if ((arr[i] == ' ' || arr[i] == '\n') && flag == IN)
		{
			count++;
			flag = OUT;
		}
		if (arr[i] != ' ' && flag == IN)
			continue;

		if (arr[i] == ' '  && flag == OUT)
		{
			continue;
		}
	}
	printf("Count of words is %d\n", count);


	return 0;
}