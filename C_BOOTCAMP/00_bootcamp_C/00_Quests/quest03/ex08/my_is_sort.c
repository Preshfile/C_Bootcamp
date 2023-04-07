#include <stdbool.h>

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY

typedef struct s_integer_array {
    int size;
    int *array;
} integer_array;
#endif

bool
my_is_sort(integer_array *a)
{

    if (a->size <= 1)
        return true;

    int i;

    // true if [still] have ascending sort
    int ascend = 1;

    // true if [still] have descending sort
    int descend = 1;

    // the value of the "previous" array element
    int prev = a->array[0];

    // the value of the "current" array element
    int cur;

    for (i = 1;  i < a->size;  ++i, prev = cur) {
        // early escape -- neither direction is in sort
        if (! (ascend || descend))
            break;

        // get current array value
        cur = a->array[i];

        // compare against previous value
        int dif = cur - prev;

        // elements are the same -- no change in status
        if (dif == 0)
            continue;

        // one of the directions has to be out-of-sort
        if (dif < 0)
            ascend = 0;
        else
            descend = 0;
    }

    return (ascend || descend) ? true : false;
}