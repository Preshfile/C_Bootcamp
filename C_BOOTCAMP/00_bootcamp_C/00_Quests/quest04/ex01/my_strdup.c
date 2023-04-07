#include <stdio.h>
#include <stdlib.h>
char *my_strdup(char *str1)
{
    char *str2 = malloc(sizeof(str1));
    char *c1 = str1, *c2 = str2;
    while (*c1)
    {
        *c2 = *c1;
        c1++, c2++;
    }
    return str2;
}