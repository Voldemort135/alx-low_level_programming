#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies the two arguments passed to the program
 * @argc: Argument Count 
 * @argv: Argument Vector
 * Return: 0 on success else return 1
 */

int main(int argc, char *argv[])
{
	int i = 1, mul;
	if (argc == 3)
	{
		mul = atoi(argv[i]) * atoi(argv[i + 1]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
