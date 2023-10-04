#include "main.h"
#include <stdbool.h>

/**
 * is_space - Checks if a character is a space.
 * @c: The character to check.
 * Return: true if the character is a space, false otherwise.
 */

bool is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 * Return: The number of words in the string.
 */

int count_words(char *str)
{
	int word_count = 0;
	bool in_word = false;

	while (*str)
	{
		if (is_space(*str))
		{
			in_word = false;
		}
		else if (!in_word)
		{
			word_count++;
			in_word = true;
		}
		str++;
	}

	return (word_count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 * Return: A pointer to an array of strings
 * (words), with the last element being NULL.
 */

char **strtow(char *str)
{
	int num_words, word_index;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	num_words = count_words(str);
	if (num_words == 0)
		return (NULL);
	*words = (char **)malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	word_index = 0, bool in_word = false;
	char *word_start = str;

	while (*str)
	{
		if (is_space(*str))
		{
			if (in_word)
			{
				*str = '\0';
				words[word_index] = word_start;
				word_index++;
				in_word = false;
			}
		}
		else if (!in_word)
		{
			word_start = str;
			in_word = true;
		}
		str++;
	}
	if (in_word)
	{
		words[word_index] = word_start;
		word_index++;
	}
	words[word_index] = NULL;
	return (words);
}
