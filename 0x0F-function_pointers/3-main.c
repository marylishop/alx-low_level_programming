# include "3-calc.h"
/*
* main - check the code for school ALX students.
* @argca: argument count.
* @argv: argument vector.
*
* Return: always 0.
*/
int main(int argc, char *argv[])
{
int a, b;
int (*operation)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

}
operation = get_op_func(argv[2]);
if (operation == NULL)
{
printf("Error\n");
exit(99);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
printf("%d\n", operator(a, b));
return (0);
