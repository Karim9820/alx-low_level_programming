#include "main.h"

/**
 *main - prints all arguments it receives.
 *All arguments should be printed, including the first one
 *Only print one argument per line, ending with a new line
 *@argv: argument array
 *@argc: argument counter
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
