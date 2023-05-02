#include "main.h"

/**
 * wildcmp - Compare strings
 * @s1: pointer to string params
 * @s2: pointer to string params
 * Return: 0
 */
switch (*s1)
{
    case '\0':
        return (*s2 == '\0');
    case '*':
        return (wildcmp(s1 + 1, s2) | wildcmp(s1, s2 + 1));
    default:
        if (*s1 == *s2)
        {
            return (wildcmp(s1 + 1, s2 + 1));
        }
        return (0);
}

