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
char *from_file;
char *to_file;

int src_file;
int dst_file;

if (argc != 3)
{
print_error(97, "Usage: cp file_from file_to");
exit(97);
}

from_file = argv[1];
to_file = argv[2];
src_file = open_src_file(from_file);
dst_file = open_dst_file(to_file);

copy_file(src_file, dst_file);

close_file(src_file);
close_file(dst_file);

return (0);
}

/**
 * print_error - prints the error message
 * @code: the exite code to be printed
 * @message: the error message to be printed
 *
 * Return: void
 */
void print_error(int code, const char *message)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(code);
}

/**
 * open_src_file - opens the file to be copied from
 * @file: pointer to file to be copied
 *
 * Return: integer value of the file copied from
 */
int open_src_file(const char *file)
{
int src_file = open(file, O_RDONLY);
if (src_file == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
exit(98);
}
return (src_file);
}

/**
 * open_dst_file - opens the file to be copied into
 * @file: pointer to the file to be copied to
 *
 * Return: integer value of the destination file
 */
int open_dst_file(const char *file)
{
int dst_file = open(file, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (dst_file == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write file to %s\n", file);
exit(99);
}
return (dst_file);
}

/**
 * copy_file - copies contents from one file to the other
 * @src_file: the file to be dopied from
 * @dst_file: the file to be copied to
 *
 * Return: void
 */
void copy_file(int src_file, int dst_file)
{
ssize_t len_read;
ssize_t len_print;
char buffer[BUFFER_SIZE];

while ((len_read = read(src_file, buffer, BUFFER_SIZE)) > 0)
{
len_print = write(dst_file, buffer, len_read);
if (len_print != len_read)
{
dprintf(STDERR_FILENO, "Error: Write to destination file failed\n");
exit(99);
}
}

if (len_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from source file\n");
exit(98);
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
if (close(file) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
exit(100);
}
}
