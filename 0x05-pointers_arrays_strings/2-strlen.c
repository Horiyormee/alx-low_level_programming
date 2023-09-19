#include "main.h"
/**
 * _stlen - this_is_the_function_name
 * @s: function parameter
 * Return: the lenght of the string
 */

int _strlen(char *s)
{
int i;
int count = 0;

for (i = 0; s[i]; i = '\0') i++;
	count++;
return (count);
}
