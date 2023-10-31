#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* count_words - Count the number of words in a string
* @str: The input string
*
* Return: Number of words in the string
*/
int count_words(char *str)
{
int count = 0;
int in_word = 0;  // To keep track if we are in a word or not
while (*str)
{
if (*str == ' ' || *str == '\t' || *str == '\n')
{
in_word = 0;
}
else if (in_word == 0)
{
in_word = 1;
count++;
}
str++;
}
return (count);
}
/**
* split_words - Split a string into words
* @str: The input string
* @words: An array of strings to store the words
*
* Return: Number of words split, or -1 on failure
*/
int split_words(char *str, char **words)
{
int word_count = 0;
int in_word = 0;
char *start = str;
while (*str)
{
if (*str == ' ' || *str == '\t' || *str == '\n')
{
if (in_word)
{
int length = str - start;
words[word_count] = duplicate_word(start, length);
if (words[word_count] == NULL)
{
return (-1);
}
word_count++;
in_word = 0;
}
}
else if (in_word == 0)
{
in_word = 1;
start = str;
}
str++;
}
if (in_word)
{
int length = str - start;
words[word_count] = duplicate_word(start, length);
if (words[word_count] == NULL)
{
return (-1);
}
word_count++;
}
words[word_count] = NULL;
return (word_count);
}
/**
* duplicate_word - Create a duplicate of a word
* @str: The input string
* @length: Length of the word
*
* Return: A new string containing the word
*/
char *duplicate_word(char *str, int length)
{
char *word = malloc(length + 1);
if (word == NULL)
{
return (NULL);
}
for (int i = 0; i < length; i++)
{
word[i] = str[i];
}
word[length] = '\0';
return (word);
}
/**
* strtow - Split a string into words
* @str: The input string
*
* Return: Array of words, or NULL on failure
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
}
int main(void)
{
char *str = "Hello, World!";
char **words = strtow(str);
if (words)
{
int i = 0;
while (words[i] != NULL)
{
printf("%s\n", words[i]);
free(words[i]);
i++;
}
free(words);
}
return (0);
}
