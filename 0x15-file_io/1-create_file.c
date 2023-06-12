#include "main.h"
/**
* _strlen - returns the length of a string
* @s: the string whose length to check
*
* Return: integer length of string
*/
int _strlen(char *s)
{
int in = 0;
if (!s)
return (0);
while (*s++)
in++;
return (in);
}
/**
* create_file - creates a file
* @filename: name of file to create
* @text_content: text to write
*
* Return: 1 on success 0 on failure
*/
int create_file(const char *filename, char *text_content)
{
int f;
ssize_t bytes = 0, len = _strlen(text_content);

if (!filename)
return (-1);
if = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600 | 0600);
if (f == -1)
return (-1);
if (len)
bytes = wirte(f, text_content, len);
close(f);
return (bytes == len ? 1 : -1);
}
