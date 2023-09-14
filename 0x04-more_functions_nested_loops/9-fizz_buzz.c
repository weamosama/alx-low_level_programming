#include <stdio.h>
/**
 * main - main function
 *
 *
 * Return: a number
 */
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if(i % 3 || i % 5)
		{
			if (i % 3 == 0)
			{
				_putchar('F');
				_putchar('I');
				_putchar('Z');
				_putchar('Z');
			}
			if (i % 5 == 0)
                        {       
                                _putchar('B');
                                _putchar('U');
                                _putchar('Z');
                                _putchar('Z');
                        }
			_putchar(' ');
		}
		else{
			printf('%d ' , i);
		}
	}
	return (0);
}
