#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 50
#define IN 1
#define OUT 0

int main()
{
	char arr[SIZE] = {0};
	char max_words[SIZE] = {0};  // arr for max words
	int count = 0;  //count of max_words
	int cs = 0;  // count of temp
	int i, j;
	int flag = OUT;
	int start, end;
	
	puts("Enter text");
	fgets(arr, SIZE, stdin);
	
	i = 0;
	while (arr[i])
	{
		if (arr[i] != ' ' && flag == OUT)
		{
			flag = IN;
			start = i;
		}
		
		if ((arr[i] == ' ' || arr[i] == '\n') && flag == IN)
		{
			flag = OUT;
			end = i - 1;

			cs = (end - start) + 1;

			
			if (cs > count)
			{
				for (j = 0; j <= cs; j++)
				{
					max_words[j] = arr[start];
					start++;
					count = cs;			
				}

			}
		}
		i++;
	}
	printf("%s - length of words is %d\n", max_words, count);
	
	return 0;
}
