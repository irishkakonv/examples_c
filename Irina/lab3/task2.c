#include <stdio.h>
#define IN 1  //inside word
#define OUT 0 //outside word

int main()
{
	char c; 
	int cs, cw;
	cw = cs = 0;
	int flag = OUT;

	while ((c = getchar()) != EOF)
	{
		if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c<= 'Z')) //enter in words
		{
			flag = IN;
			putchar(c);		//print a word
			cs++;			//count the number of characters
		}
		
		if ((c == ' ' || c == '\n') && flag == IN)   //exit from the word
		{
			flag = OUT;
			printf(" -  %d\n", cs);				//print length of the words
			cs = 0;
			cw++;
		}

		if ((c == ' ' || c == '\n') && flag == OUT)
		{
			continue;
		}
		
	}
	printf("Count of words are %d\n", cw);
	return 0;
}