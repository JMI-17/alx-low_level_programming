#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* is_whitespace - Check if a character is a whitespace character.
* @c: The character to check.
*
* Return: (1) if the character is a whitespace character, (0) otherwise.
*/
int is_whitespace(char c)
{
return (c == ' ' || c == '\t' || c == '\n');
}
/**
* count_words - Count the number of words in a string.
* @str: The input string.
*
* Return: The number of words in the string.
*/
int count_words(char *str) \
{
int count = 0;
int in_word = 0;
while (*str)
{
if (is_whitespace(*str))
{
in_word = 0;
}
else if (!in_word)
{
in_word = 1;
count++;
}
str++;
}
return (count);
}
/**
* duplicate_word - Duplicate a word from a string.
* @start: Pointer to the start of the word.
* @end: Pointer to the end of the word.
*
* Return: A dynamically allocated copy of the word.
*/
char *duplicate_word(char *start, char *end)
{
int length = end - start;
char *word = malloc(length + 1);
if (word == NULL)
{
return (NULL);
}

for (int i = 0; i < length; i++)
{
word[i] = start[i];
}
word[length] = '\0';
return (word);
}
/**
* split_words - Split a string into words.
* @str: The input string.
* @words: Array to store words.
*
* Return: Number of words found.
*/
int split_words(char *str, char **words)
{
int in_word = 0;
char *word_start = str;
char **word_ptr = words;
int word_count = 0;
while (*str)
{
if (is_whitespace(*str))
{
if (in_word)
{
*word_ptr = duplicate_word(word_start, str);
if (*word_ptr == NULL)
{
return (-1);
}
in_word = 0;
word_ptr++;
word_count++;
}
}
else if (!in_word)
{
word_start = str;
in_word = 1;
}
str++;
}
if (in_word)
{
*word_ptr = duplicate_word(word_start, str);
if (*word_ptr == NULL)
{
return (-1);
}
word_count++;
}
*word_ptr = NULL;
return (word_count);
}
/**
* strtow - Split a string into words.
* @str: The input string.
*
* Return: An array of dynamically allocated words, or NULL if it fails.
*/
char **strtow(char *str)
{
if (str == NULL || *str == '\0')
{
return (NULL);
}
int num_words = count_words(str);
char **words = malloc((num_words + 1) * sizeof(char *));
if (words == NULL)
{
return (NULL);
}
int word_count = split_words(str, words);
if (word_count == -1)
{
while (*words)
{
free(*words);
words++;
}
free(words);
return (NULL);
}
return (words);
