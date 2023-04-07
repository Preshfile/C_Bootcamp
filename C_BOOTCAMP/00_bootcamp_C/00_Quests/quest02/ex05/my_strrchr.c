#include <stdio.h>
#include <string.h>

/* Portable version of strrchr().
 */

/*
@deftypefn Supplemental char* strrchr (const char *@var{s}, int @var{c})
Returns a pointer to the last occurrence of the character @var{c} in
the string @var{s}, or @code{NULL} if not found.  If @var{c} is itself the
null character, the results are undefined.
@end deftypefn
*/

char *my_strrchr(char *param_1, char param_2)
{
    char *rtnval = 0;

    do
    {
        if (*param_1 == param_2)
            rtnval = (char *)param_1;
    } while (*param_1++);
    return (rtnval);
}
