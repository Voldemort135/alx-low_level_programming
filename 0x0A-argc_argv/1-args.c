#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed to the program
 * @argc: argument count
 * @argv: argument vectors
 * 
 * Return:  always 0
 */

int main(int argc, char **argv)
{
	int count = -1;
	int i = 0;

	if (argv[1])
	{
		while (argc--)
		{
			count++;
		}

		printf("%d\n", count);
	}
	else
	{
		printf("%d", i);
	}



	return (0);
}

