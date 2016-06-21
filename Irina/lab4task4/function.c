#include "struc.h"
#include <string.h>
#include <stdio.h>
#define IN 1
#define OUT 0
#define SIZE 100

void deleteZero1(struct MYSTRUCTURA *example)      //delete '\n' in  end of a string
{
	example->arr[strlen(example->arr) - 1] = '\0';
}

void deleteZero(char *beginner)      //delete '\n' in  end of a string
{
	beginner[strlen(beginner) - 1] = '\0';
}

int getWords(struct MYSTRUCTURA *example, char *parr1[]) //enter parr for every string
{
	int flag = 0, count = 0, i = 0;
	while (example->arr[i])
	{
		if (example->arr[i] != ' ' && flag == OUT)
		{
			parr1[count++] = &(example->arr[i]);
			flag = IN;
		}
		else if (example->arr[i] == ' ' || example->arr[i + 1] == '\0')
			flag = OUT;
		i++;
	}
	return count;
	
}

void printWord(char *parr[], int number)
{
	int i, j;
	for (j = 0; j < number; j++)
	{
		for (i = 0; (*(parr[j] + i) != ' ') && (*(parr[j] + i) != '\0'); i++)
			printf("%c", *(parr[j] + i));
		putchar('\n');
	}
}