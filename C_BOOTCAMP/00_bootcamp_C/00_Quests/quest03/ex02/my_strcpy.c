#include <stdio.h>
char *my_strcpy(char *param_1, char *param_2)
{
int x = 0;
while (param_2[x] != '\0')
{
    param_1[x] = param_2[x];
    x++;
}
param_1[x] = '\0';

}