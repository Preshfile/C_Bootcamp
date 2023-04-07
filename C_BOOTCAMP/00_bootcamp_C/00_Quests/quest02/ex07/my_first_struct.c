#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int *array;
} integer_array;
#endif

void my_first_struct(integer_array *param_1)
{
    param_1->size;
    printf("%i\n", param_1->size);
    int length = param_1->size;

    for(int i=0; i<length; i++){
        printf("%i\n", param_1->array[i]);
    }
}
     