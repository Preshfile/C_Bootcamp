#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif

integer_array* my_count_on_it(string_array* str){
integer_array* intArr;
int size = str->size,  count =0;
intArr= malloc(1);  
intArr->size = size;
intArr->array = malloc(intArr->size*sizeof(intArr->size));  
for(int i = 0 ; i < size; i++){
    for(int j =0 ; str->array[i][j] != '\0';j++) count++;
    intArr->array[i] = count;
    count =0;
}
return intArr; }