lude "main.h"
/**
 * rot13 - datarot
 * @s: string
 * Return: data
 */
char *rot13(char *s)
	{
	int i;
	int j;
	char data[] = "ABCDEFGHIJKLMNOPKRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; j < s2; J++)
	{
		if (s[i] == data[j])
		{
			s[i] = datarot[j];
			break;
		}
	}
	}
	return (s);
	}
