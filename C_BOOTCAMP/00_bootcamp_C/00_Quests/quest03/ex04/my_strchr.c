
#include <stdio.h>
char *my_strchr(char *param_1, char param_2)
{
    do
    {
        if (*param_1 == param_2)
            return param_1;
    } while (*param_1++);
    return NULL;
}