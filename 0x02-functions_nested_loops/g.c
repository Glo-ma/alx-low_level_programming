#include "holberton.h"
/**
* main - printing alphabets
* 
* return: (0)
*
*/
int main (void)
{
char *school_name = "Holberton";
int letters = 0;
 for (letters = 0; letters <=9; letters++)
{
_putchar(school_name[letters]);
}
_putchar('/n');
return (0);
}
