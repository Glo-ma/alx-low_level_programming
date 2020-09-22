#include "holberton.h"
/**
* main - check the code for Holberton School students.
*
* _islower - Return 1 if letter is lowercase, 0 if not.
* @c: char type letter
* Return: 1 if lowercase, 0 if not lowercase
*/
int _islower(int c)
{
if (c > 96 && c < 123)
return (1);
else
return (0);
}
int main(void)
{
int r;
r = _islower('H');
_putchar(r + '0');
r = _islower('o');
_putchar(r + '0');
r = _islower(108);
_putchar(r + '0');
_putchar('\n');
}
