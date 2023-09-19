#include <stdio.h>
#include <stdlib.h>

/**
 * write - write a function
 *@fd: find the directory
 *@buf: add the buffer
 *@count: count the digit
 * Return: 0
 */
ssize_t write(int fd, const void *buf, size_t count)
{
	const char *message = "Hello, world!\n";
	size_t message_length = strlen(message);
	ssize_t bytes_written = write(1, message, message_length);

	if (bytes_written == -1)
	{
		perror("write");
		return (1);
	}
	return (0);
}
