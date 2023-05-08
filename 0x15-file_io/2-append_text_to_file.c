#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * append_text_to_file - append the file
 * @filename:name
 * @text_content:space
 * Return:return
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;

	fp = fopen(filename, "a");
	if (filename == NULL)
	{
	return (-1);
	}
	if (fp == NULL)
	{
	return (-1);
	}
	if (text_content != NULL)
	{
	fputs(text_content, fp);
	}
	fclose(fp);
	return (1);
}
