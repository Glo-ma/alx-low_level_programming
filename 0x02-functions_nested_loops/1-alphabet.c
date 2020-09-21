#include "holberton.h"
/**
*
*main - code entry
*return (0)
*/
int main (void)
{
char alph;
for (alph = 'a'; alph <= 'z'; alph++)
{
_putchar(alph);
 }
_putchar('\n');
return (0);#include "holberton.h"
/**
 * print_alphabet - Print alphabet in lowercase using only `_putchar`
 * Return: 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
}
