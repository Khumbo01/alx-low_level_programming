#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int c;

	for (i = 0; i < 8; i++)
	{
		for (c = 0; c < 8; c++)
			_putchar(a[i][c]);
		_putchar('\n');
	}
}
