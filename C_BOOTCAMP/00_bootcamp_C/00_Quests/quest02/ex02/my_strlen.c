#include <stdio.h>
#include <string.h>

int my_strlen(char *param_1)
{
    int i = 0, sum = 0;
    char c = param_1[0];

    while (c != '\0')
    {
        sum++;
        c = param_1[++i];
    }
    return sum;
}