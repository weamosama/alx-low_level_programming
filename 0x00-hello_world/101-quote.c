#include <stdio.h>
#include <unistd.h>
/**
*main - Entry point
*Return: Always 1 (Success)
**/
int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.\n";
	write(STDERR_FILENO, message, 80);
	return (1);

