#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string added to end of file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file;
int let_len;
int let_print;

if (!filename)
{
return (-1);
}

file = open(filename, O_WRONLY | O_APPEND);

if (file == -1)
{
return (-1);
}

if (text_content)
{
for (let_len = 0; text_content[let_len]; let_len++)
{
;
}
let_print = write(file, text_content, let_len);
if (let_print == -1)
{
return (-1);
}
}

close(file);
return (1);
}
