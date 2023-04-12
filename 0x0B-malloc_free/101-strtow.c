#include <stdlib.h>
#include <string.h>

#define MAX_WORD_LENGTH 100
/**
 * strtow - function display the word for new line
 * @str:input
 * Return: 0;
 */

char **strtow(char *str)
{
	char **words;
	int i, j;
	char *word_end;
	int word_len;
	char *word;

	words = malloc(sizeof(char *) * (strlen(str) / 2 + 1));
	i = 0;
	if (str == NULL || *str == '\0')
	{
	return (NULL);
	}
	if (words == NULL)
	{
	return (NULL);
	}
	while (*str != '\0')
	{
	while (*str == ' ')
	{
	str++;
	}
	word_end = str;
	while (*word_end != ' ' && *word_end != '\0')
	{
	word_end++;
	}
	word_len = word_end - str;
	if (word_len > 0)
	{
	word = malloc(sizeof(char) * (word_len + 1));
	if (word == NULL)
	{
	for (j = 0; j < i; j++)
	{
	free(words[j]);
	}
	free(words);
	return (NULL);
	}
	strncpy(word, str, word_len);
	word[word_len] = '\0';
	words[i++] = word;
	}
	str = word_end;
	}
	words[i] = NULL;
	return (words);
}
