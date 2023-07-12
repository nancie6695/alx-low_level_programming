#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup-duplicate new memeory space allocation
 * @str: char
 * return: 0
 */

char *_strdup(char *str)
{
	char *copy;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	copy = malloc(sizeof(char) * (i + 1));

	if (copy  == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		copy[j] = str[j];

	return (copy);
}

