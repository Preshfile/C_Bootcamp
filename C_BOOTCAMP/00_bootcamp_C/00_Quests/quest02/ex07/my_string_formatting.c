#include <stdio.h>
/*

 QWASAR.IO -- my_string_formatting

 @param {char*} param_1
 @param {char*} param_2
 @param {int} param_3

 @return {void}
**
*/

void my_string_formatting(char* firstname, char* lastname, int age)
{
    printf("Hello, my name is %s %s, I'm %d.\n", firstname, lastname, age);
}
