#include <stdio.h>

/**
 *main - main function
 *@argc:fff
 *@argv: arra
 *Return: int
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}else
	{
		printf("0\n");
	}

	return (0);
}
