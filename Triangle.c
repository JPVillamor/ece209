#include <stdio.h>
#include <stdlib.h>

void printSp(int x)
{
	int i;

	for (i = 0; i < x; i++)
		printf(" ");
}

int printTri(char c)
{
	if (c < 'A' || c > 'Z')
		return 0;
	else
	{
		int lines, i, counter = 0;

		lines = c + 1 - 'A';

		for (i = 0; i < lines; i++)
		{
			char j;

			printSp(lines - i - 1);
			
			for (j = 'A'; j < 'A' + i; j++)
			{
				printf("%c", j);
				counter++;
			}
			
			for (; j >= 'A'; j--)
			{
				printf("%c", j);
				counter++;
			}
			
			printf("\n");
		}

		return counter;
	}
}

int main( int argc, char *argv[] ) 
{
	int p;

	p = printTri((char)*argv[1]);

	printf("%d\n", p);

	return 0;
}
