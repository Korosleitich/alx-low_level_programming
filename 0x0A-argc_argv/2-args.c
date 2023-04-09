#include <stdio.h>

/**
 * main - prints  arguments
 * @argc: argument counting
 * @argv: args
 *
 * Return: 0  on success
 */
int main(int argc, char **argv)
{
int y = 0;
do
{
printf("%s\n", argv[y]);
y++;
} 
while (y < argc);
return (0);
}
