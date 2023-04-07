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
void my_print_words_array(const string_array *param_1)
{
    for (int i = 0; i < param_1->size; i++)
    {
        // puts(param_1->array[i]);

        for (char *ptr = param_1->array[i]; *ptr != '\0'; ptr++)
            putchar(*ptr);

          // Output newline (if desired).

          putchar('\n');
    }
}
