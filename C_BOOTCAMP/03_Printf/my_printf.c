#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

// A custom implementation of printf that prints to stdout.
int my_printf(char * restrict format, ...) {
    va_list args;
    va_start(args, format);
    int i = 0;
    int written_chars = 0;
    if (format == NULL) {
        written_chars += write(1, "NULL STRING (null)!\n", 20);
        return written_chars;
    }
    while (format[i] != '\0') {
        if (format[i] == '%') {
            switch (format[i + 1]) {
case 'd':
case 'i': {
int val = va_arg(args, int);
char str[12]; // buffer for storing the string representation of val
int j = 0;
int num_digits = 0;
if (val == 0) {
    str[j] = '0';
    j++;
}
else {
    if (val < 0) {
        str[j] = '-';
        j++;
        val = -val;
    }
    int temp_val = val;
    while (temp_val != 0) {
        num_digits++;
        temp_val /= 10;
    }
    temp_val = val;
    for (int k = 0; k < num_digits; k++) {
        str[j + num_digits - 1 - k] = (temp_val % 10) + '0';
        temp_val /= 10;
    }
}
str[j + num_digits] = '\0';
written_chars += write(1, str, strlen(str));
i++;
break;
}
case 'o': {
int val = va_arg(args, int);
char str[12]; // buffer for storing the string representation of val
int j = 0;
if (val == 0) {
str[j] = '0';
j++;
}
while (val != 0) {
str[j] = (val % 8) + '0';
j++;
val /= 8;
}
str[j] = '\0';
// Reverse the string
for (int k = 0; k < j / 2; k++) {
char temp = str[k];
str[k] = str[j - 1 - k];
str[j - 1 - k] = temp;
}
written_chars += write(1, str, strlen(str));
i++;
break;
}
case 'u': {
unsigned int val = va_arg(args, unsigned int);
char str[12]; // buffer for storing the string representation of val
int j = 0;
if (val == 0) {
str[j] = '0';
j++;
}
while (val != 0) {
str[j] = (val % 10) + '0';
j++;
val /= 10;
}
str[j] = '\0';

// Reverse the string
for (int k = 0; k < j / 2; k++) {
char temp = str[k];
str[k] = str[j - 1 - k];
str[j - 1 - k] = temp;
}
written_chars += write(1, str, strlen(str));
i++;
break;
}
case 'x': {
unsigned int val = va_arg(args, unsigned int);
char str[12]; // buffer for storing the string representation of val
int j = 0;
if (val == 0) {
str[j] = '0';
j++;
}
while (val != 0) {
if (val % 16 < 10) {
str[j] = (val % 16) + '0';
} else {
str[j] = (val % 16) - 10 + 'A';
}
j++;
val /= 16;
}
str[j] = '\0';
// Reverse the string
for (int k = 0; k < j / 2; k++) {
char temp = str[k];
str[k] = str[j - 1 - k];
str[j - 1 - k] = temp;
}
written_chars += write(1, str, strlen(str));
i++;
break;
}
case 'c': {
char c = (char)va_arg(args, int);
written_chars += write(1, &c, 1);
i++;
break;
}
case 's': {
char *val = va_arg(args, char *);
if (val == NULL)
    val = "(null)";
written_chars += write(1, val, strlen(val));
i++;
break;
}
case '%': {
char c = '%';
written_chars += write(1, &c, 1);
i++;
break;
}
case 'p': {
void* ptr = va_arg(args, void*);
char str[12]; // buffer for storing the string representation of ptr
int j = 0;
if (ptr == NULL) {
str[j] = '0';
j++;
}
while (ptr != 0) {
if ((unsigned long long)ptr % 16 < 10) {
str[j] = ((unsigned long long)ptr % 16) + '0';
} else {
str[j] = ((unsigned long long)ptr % 16) - 10 + 'a';
}
j++;
ptr = (void*)((unsigned long long)ptr / 16);
}
str[j] = '\0';

// Reverse the string
for (int k = 0; k < j / 2; k++) {
char temp = str[k];
str[k] = str[j - 1 - k];
str[j - 1 - k] = temp;
}
written_chars += write(1, "0x", 2);
written_chars += write(1, str, strlen(str));
i++;
break;
}
}
} else {
            written_chars += write(1, &format[i], 1);
        }
        i++;
    }
    va_end(args);
    return written_chars;
}