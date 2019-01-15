/*
** EPITECH PROJECT, 2018
** CLib
** File description:
** The my_strcmp function
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i])
    {
        if (s1[i] > s2[i])
            return (1);
        if (s2[i] > s1[i])
            return (-1);
        i++;
    }
    return (0);
}
