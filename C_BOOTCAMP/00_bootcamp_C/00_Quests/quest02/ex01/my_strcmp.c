#include <string.h>
#include <stdio.h>
int my_strcmp(char *param_1, char *param_2)
{
    int i = 0;
    unsigned char *param_1_cpy = (unsigned char *)param_1;
    unsigned char *param_2_cpy = (unsigned char *)param_2;
    while (param_1_cpy[i] != '\0' && param_2_cpy[i] != '\0')
    {
        if (param_1_cpy[i] == param_2_cpy[i])
            i++;
        else
            break;
    }
    return (param_1_cpy[i] - param_2_cpy[i]);
}

