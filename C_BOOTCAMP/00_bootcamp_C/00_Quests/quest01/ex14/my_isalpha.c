#include <stdio.h>

int my_isalpha(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    //in the ASCII table, uppercase alphabets are between 65 - 90
    //while lower case if between 97 -122
        return (1);
    return (0);
}
