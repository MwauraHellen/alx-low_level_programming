#include <stdio.h>

int main(void)
{
	const char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	const ssize_t length = sizeof(message) - 1; // exclude null terminator
	write(STDERR_FILENO, message, length);
	return (1);
}

