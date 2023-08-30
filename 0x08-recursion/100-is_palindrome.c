#include "main.h"

int is_palindrome(char *s);
int check(char *s, int start, int end, int mod);

/**
 * strlength - function
 * @c: input
 * Return: int.
 */

int strlength(char *c)
{
	int i = 0;

	if (*c > '\0')
		i += strlength(c + 1) + 1;
	return (i);
}

/**
 * is_palindrome - function
 * @s: input
 * Return: int.
 */

int is_palindrome(char *s)
{
	int end_of_string = strlength(s);

	return (check(s, 0, end - 1, end % 2));
}

/**
 * check - function
 * @s: input
 * @start: input
 * @end: input
 * @mod: input
 * Return: int.
 */

int check(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, mod));
}
