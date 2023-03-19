#include <stdio.h>
/**
 * main - main function
 *Return: 1 is error
 */

int main(void)
{
	const char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	const ssize_t length = sizeof(message) - 1; 
	write(STDERR_FILENO, message, length);
	return (1);
}

