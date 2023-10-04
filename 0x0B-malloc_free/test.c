#include <stdio.h>
#include <stdlib.h>

char *argstostr(int ac, char **av)
{
	char **str;
	int i;

	str = malloc(sizeof(char *) * ac);
	for (i = 0; i < ac; i++)
	{
		str[i] = av[i];
	}
	return *str;
}

int main(int ac, char *av[])
{
	char *s;

	s = argstostr(ac, av);
	if (s == NULL)
	{
		return (1);
	}
	printf("%s", s);
	free(s);
	return (0);
}
