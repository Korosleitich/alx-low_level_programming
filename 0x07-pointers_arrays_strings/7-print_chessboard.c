#include "main.h"
/**
  * print_chessboard - prints chessboard
  * @a:  array of two dimensional
  *
  * Return: void
  */

void print_chessboard(char (*a)[8])
{
int row_1;
int column_1;
for (row_1 = 0; row_1 < 8; row_1++)
{
for (column_1 = 0; column_1 < 8; column_1++)
_putchar(a[row_1][column_1]);
_putchar('\n');
}
}
