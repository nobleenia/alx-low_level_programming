#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: pointer to the file to be read
 * @letters: the number of letters to print
 *
 * Return: number of letters printed, 0 for failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int file;
ssize_t let_read;
ssize_t let_print;
char *buffer;

if (!filename)
{
return (0);
}

file = open(filename, O_RDONLY);

if (file == -1)
{
return (0);
}

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(file);
return (0);
}

let_read = read(file, buffer, letters);
let_print = write(STDOUT_FILENO, buffer, let_read);

close(file);
free(buffer);

return (let_print);
}
