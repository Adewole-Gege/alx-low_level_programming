#include "main.h"
#include <stdlib.h>
/**
 * count_words - Counts the number of words in a string
 * @str: The input string
 *
 * Return: Number of words
 */
int count_words(char *str)
{
    int count = 0, i = 0;

    while (str[i] != '\0')
    {
        /* Skip spaces */
        while (str[i] == ' ')
            i++;
        if (str[i] != '\0')
            count++;
        /* Move to end of word */
        while (str[i] != ' ' && str[i] != '\0')
            i++;
    }

    return count;
}

/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: Pointer to an array of strings (words), or NULL if failure
 */
char **strtow(char *str)
{
    char **words;
    int i, j, k, len, count = 0, word_count = 0;

    if (str == NULL || *str == '\0')
        return (NULL);

    /* Count number of words */
    word_count = count_words(str);

    /* Allocate memory for array of words */
    words = malloc(sizeof(char *) * (word_count + 1));
    if (words == NULL)
        return (NULL);

    /* Extract words and store in array */
    i = 0;
    while (str[i] != '\0')
    {
        /* Skip spaces */
        while (str[i] == ' ')
            i++;
        if (str[i] == '\0')
            break;

        /* Find length of current word */
        len = 0;
        while (str[i + len] != ' ' && str[i + len] != '\0')
            len++;

        /* Allocate memory for the word */
        words[count] = malloc(sizeof(char) * (len + 1));
        if (words[count] == NULL)
        {
            /* Free previously allocated memory on failure */
            for (k = 0; k < count; k++)
                free(words[k]);
            free(words);
            return (NULL);
        }

        /* Copy the word into words[count] */
        for (j = 0; j < len; j++)
            words[count][j] = str[i++];
        words[count][j] = '\0'; /* Null-terminate the word */

        count++; /* Move to the next word */
    }

    words[count] = NULL; /* Set last element of words to NULL */

    return (words);
}
