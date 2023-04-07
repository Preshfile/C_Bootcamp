

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char **array;
} string_array;
#endif

char *my_join(string_array *param_1, char *param_2)
{
    if(param_1->size == 0){
        return NULL;
    }
    int len = param_1->size;
    int total_len = sizeof(param_1->array) + (len - 1) * strlen(param_2) + 1;
    char *res = malloc(total_len);
    res[total_len - 1] = '\n';

    for (int i = 0; i < len; i++){
        strcat(res, param_1->array[i]);
        if(i + 1 < len){
            strcat(res, param_2);
        }
    }

    return res;
}

