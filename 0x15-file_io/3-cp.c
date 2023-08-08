#include "main.h"

/**
 * main - program that copies the content of a file to another file
 * @argc: the argument counter variable
 * @argv: the argument vector
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{

int src_file, dst_file;
ssize_t num, len_print;
char buffer[BUFFER_SIZE];

if (argc != 3)
{
dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
exit(97);
}

src_file = open(argv[1], O_RDONLY);
dst_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
print_error(src_file, dst_file, argv);

num = BUFFER_SIZE;
while (num)
{
num = read(src_file, buffer, BUFFER_SIZE);
if (num == -1)
{
print_error(-1, 0, argv);
}
len_print = write(dst_file, buffer, num);
if (len_print == 1)
{
print_error(0, -1, argv);
}
}

close_file(src_file);
close_file(dst_file);

return (0);
}

/**
 * print_error - prints the error message
 * @src_file: file to copy from
 * @dst_file: file to copy to
 * @argv: argument vector
 *
 * Return: void
 */
void print_error(int src_file, int dst_file, char *argv[])
{
if (src_file == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (dst_file == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}

/**
 * close_file - closes both files opened
 * @file: files to be closed
 *
 * Return: void
 */
void close_file(int file)
{
int close_err = close(file);
if (close_err == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
exit(100);
}
}
