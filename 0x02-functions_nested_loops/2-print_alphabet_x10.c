#include "holberton.h"
/**
* main - check the code for Holberton School students.
* Return: 0
* print_alphabet_x10 - Print alphabet in lowercase 10 times
*
*/
void print_alphabet_x10(void)
{
int i = 0;
char c;
while (i < 10)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
i++;
}
}
