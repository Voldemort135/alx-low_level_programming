#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program that called it
 * @argc: argument count
 * @argv: argument vector
 * return: always 0
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);

	return (0);
}
