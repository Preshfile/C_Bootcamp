#include <stdio.h>
#include <string.h>
char *reverse_string(char *param_1)
{
    int n = strlen(param_1);

    for (int i = 0; i < n / 2; i++)
    {
        char ch = param_1[i];
        param_1[i] = param_1[n - i - 1];
        param_1[n - i - 1] = ch;
    }
    return param_1;
}
