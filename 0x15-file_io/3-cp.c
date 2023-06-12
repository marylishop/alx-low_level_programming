#include "main.h"
#define USAGE "Usage: cp file-from file_to\n"
#define ERR_NOREAD "Error: Cant't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close file %d\n"
#define PERMISSIONS (S_IRUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
* main - program
* @ac: argumment count
* @av: argumment vector
*
* Return: 1 on success 0 on failure
*/
int main(int ac, char **av)
{
int form_file = 0, to_file = 0;
ssize_t bytes;
char buf[READ_BUF_SIZE];
if (ac != 3)
dprintf(STDERR_FILENO, USAGE), exit(97);
form_file = open(av[1], O_RDONLY);
if (from_file == -1)
dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
to_file = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
if (to_file == -1)
dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

while ((bytes = read(from_file, buf, READ_BUF_SIZE)) > 0)
if (write(to_file, buf, bytes) != bytes)
dprintf(STDERR_FILENO, ERR_NOREAD, ERR_NOWRITE, av[2]), exit(99);
if (bytes == -1)
dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98)

form_file = close(from_file);
to_file = close(to_file);
if (from_file)
dprintf(STDERR_FILENO, ERR_NOCLOSE, from_file), exit(100);
if (to_file)
dprintf(STDERR_FILENO, ERR_NOCLOSE, from_file), exit(100);
return (EXIT_SUCCESS);
}
