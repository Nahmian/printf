#include "main.h"
/**
* _strlen - the function that print number of characters
* @s: the parametre
* Return: return the number of characters
*/
int _strlen(char *s)
{
int i, c = 0;

for (i = 0; s[i] != '\0'; i++)
{
c++;
}
return (c);
}
/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
