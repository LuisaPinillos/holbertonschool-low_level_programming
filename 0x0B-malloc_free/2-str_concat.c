#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 *@s1: string 1
 *@s2: string 2
 * Return: s
 */

char *str_concat(char *s1, char *s2)
{
    int i, a, result;
    int suma1 = 0, suma2 = 0;
    char *s;

    if (s1 && s2 )
    {
        suma1 = strlen(s1);
        suma2 = strlen(s2);
        result = suma1 + suma2;
        s = malloc((sizeof(char) * result) + 1);
        if (s == 0)
        {
        return (NULL);
        }
        for (i = 0; i < suma1; i++)
        {
        s[i] = s1[i];
        }
        for (a = 0; a < suma2; a++, i++)
        {
        s[i] = s2[a];
        }
        s[i] = '\0';
        return (s);
    }
    else if (s1 == NULL && s2)
    {
        suma2 = strlen(s2);
        s = malloc((sizeof(char) * suma2) + 1);
        if (s == 0)
        {
        return (NULL);
        }
        for (i = 0; i < suma1; i++)
        {
        s[i] = s1[i];
        }
        for (a = 0; a < suma2; a++, i++)
        {
        s[i] = s2[a];
        }
        s[i] = '\0';
        return (s);
    }
    else if(s1 && s2 == NULL)
    {
        suma1 = strlen(s1);
        s = malloc((sizeof(char) * suma1) + 1);
        if (s == 0)
        {
        return (NULL);
        }
        for (i = 0; i < suma1; i++)
        {
        s[i] = s1[i];
        }
        for (a = 0; a < suma2; a++, i++)
        {
        s[i] = s2[a];
        }
        s[i] = '\0';
        return (s);
    }
    else 
    {
      s = malloc(sizeof(char) * 1);
      s[0] = '\0';
      return (s);
    }
}
