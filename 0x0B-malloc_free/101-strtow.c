#include "main.h"
#include <stdlib.h>
#include <string.h>

char **strtow(char *str)
{
	int count;
	char *ptr;
	char **words;
	char *token;
	int i;
	int j;

	count = 0;
	ptr = str;

	if (str == NULL || *str == '\0')
	{
	return (NULL);
	}
	while (*ptr != '\0')
	{
	if (*ptr == ' ')
	{
	count++;
	}
	ptr++;
	}
	count++;
	words = (char **)malloc(count * sizeof(char *));
	if (words == NULL)
	{
	return (NULL);
	}
	i = 0;
	token = strtok(str, " ");
	while (token != NULL)
	{
	words[i] = (char *)malloc((strlen(token) + 1) * sizeof(char));
	if (words[i] == NULL)
	{
	for (j = 0; j < i; j++)
	{
	free(words[j]);
	}
	free(words);
	return (NULL);
	}
	strcpy(words[i], token);
	i++;
	token = strtok(NULL, " ");
	}
	words[i] = NULL;
	return (words);
}
