#include <stdlib.h>
#include "main.h"

/**
 * count_words - count words in string
 * @str: input string
 *
 * Return: no of words in string
 */

int count_words(char *str)
{
	int i = 1;
	int words = 0;

	while (str[i])
	{
		if (str[i] == ' ' && str[i - 1] != ' ')
			++words;
		++i;
	}
	if (str[i - 1] != ' ')
		++words;

	return (words);
}

/**
 * len_word - get word length
 * @word:  pointer to start of the word
 *
 * Return: length of the word
 */

int len_word(char *word)
{
	int len;

	for (len = 0; word[len] != ' ' && word[len] != '\0'; ++len)
		;
	return (len);
}

 /**
 * strtow - break string into words
 * @str: input string
 *
 * Return: string of words (null-terminated)
 *         NULL (failed) or (empt string)
 */

char **strtow(char *str)
{
	int i, j = -1, k = 0, words;
	char **ptr;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);
	words = count_words(str);
	ptr = (char **)malloc(sizeof(char *) * words + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[words + 1] = NULL;
	for (i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] == ' ')
			k = 0;
		else if (i == 0 || str[i - 1] == ' ')
		{
			++j;
			ptr[j] = malloc((1 + len_word(&str[i])) * sizeof(char));
			if (ptr[j] == NULL)
			{
				for (; j >= 0; --j)
					free(ptr[j]);
				free(ptr);
				return (NULL);
			}
		}
		if (str[i] != ' ')
		{
			ptr[j][k] = str[i];
			++k;
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			{
				ptr[j][k] = '\0';
			}
		}
	}
	return (ptr);
}
