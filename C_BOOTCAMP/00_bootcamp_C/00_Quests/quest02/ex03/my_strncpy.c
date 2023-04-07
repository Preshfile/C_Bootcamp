
#include <stdio.h>

char *my_strncpy(char *param_1, char *param_2, int param_3)
{
    // return if dest and src is NULL
    if ((param_1 == NULL) && (param_2 == NULL))
        return NULL;
    // take a pointer pointing to the beginning of dest string
    char *start = param_1;
    // copy first n characters of C-string pointed by src
    // into the array pointed by dest
    while (*param_2 && param_3--)
    {
        *param_1 = *param_2;
        param_1++;
        param_2++;
    }
    // null terminate dest string
    *param_1 = '\0';
    return start;
}