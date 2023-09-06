#include <stdio.h>

/**
 * main - prints all the arguments it receives
 * @argc: argument count
 * @argv: argument vector
 * return: always 0
 */

int main(int argc, char **argv)
{
	while(argc--)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}
