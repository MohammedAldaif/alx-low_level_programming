#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main()
{
	char *concat;

	concat = string_nconcat(NULL, NULL , 10);
	if (concat == NULL)
		printf("failed");
	printf("%s\n", concat);
	free(concat);
	return (0);
}
