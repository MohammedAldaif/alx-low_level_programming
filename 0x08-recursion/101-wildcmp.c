#include "main.h"

/**
 * skip_stars - check the code
 * @s2: input
 * Return: Always 0.
 */

char *skip_stars(char *s2)
{
	if (*s2 == '*')
		return (skip_stars(s2 + 1));
	else
		return (s2);
}

/**
 * inception - check the code
 * @s1: input
 * @s2: input
 * Return: Always 0.
 */

int inception(char *s1, char *s2)
{
	int ret = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		ret += wildcmp(s1 + 1, s2 + 1);
	ret += inception(s1 + 1, s2);
	return (ret);
}

/**
 * wildcmp - check the code
 * @s1: input
 * @s2: input
 * Return: Always 0.
 */

int wildcmp(char *s1, char *s2)
{
	int ret = 0;

	if (!*s1 && *s2 == '*' && !*skip_stars(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);
		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);
	if (*s2 == '*')
	{
		s2 = skip_stars(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			ret += wildcmp(s1 + 1, s2 + 1);
		ret += inception(s1, s2);
		return (!!ret);

	}
	return (0);
}
