/*
** EPITECH PROJECT, 2018
** CLib
** File description:
** The my_split function
*/

#include <stdlib.h>
#include "lib.h"

char **my_split(char const *str, char deli)
{
    char **final = malloc(sizeof(char *) * (numb_of_words(str, deli) + 1));
    int i = 0, word_numb = 0, i_numb = 0, size = 0;

    final[numb_of_words(str, deli)] = NULL;
    final[word_numb] = malloc(sizeof(char) * (word_size(str, i, deli) + 1));
    while (i != my_strlen(str)) {
        if (str[i] == deli) {
            final[word_numb][i_numb] = '\0';
            word_numb++;
            i++;
            size = word_size(str, i, deli);
            final[word_numb] = malloc(sizeof(char) * (size + 1));
            i_numb = 0;
        }
        final[word_numb][i_numb] = str[i];
        i_numb++;
        i++;
    }
    final[word_numb][i_numb] = '\0';
    return (final);
}

int numb_of_words(char const *str, char delimiter)
{
    int i = 0;
    int numb_of_words = 0;

    while (i != my_strlen(str)) {
        if (str[i] == delimiter)
            numb_of_words++;
        i++;
    }
    return (numb_of_words);
}

int word_size(char const *str, int pos, char delimiter)
{
    int size = 0;

    while (str[pos] != delimiter) {
        pos++;
        size++;
    }
    return (size);
}
