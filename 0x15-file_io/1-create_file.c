#include "main.h"

/**
 * create_file -  creates a file
 * @filename: name of the file to create
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int file;
int let_len;
int let_print;

if (!filename)
{
return (-1);
}

file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

if (file == -1)
{
return (-1);
}

if (!text_content)
{
text_content = "";
}

for (let_len = 0; text_content[let_len]; let_len++)
{
;
}

let_print = write(file, text_content, let_len);
if (let_print == -1)
{
return (-1);
}

close(file);
return (1);
}
