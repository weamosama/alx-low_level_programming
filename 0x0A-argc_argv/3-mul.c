#include <stdio.h>
#include <stdlib.h>
/**
 *main - main function
 *@argc:fff
 *@argv: arra
 *Return: int
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	int num1, num2, result;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
