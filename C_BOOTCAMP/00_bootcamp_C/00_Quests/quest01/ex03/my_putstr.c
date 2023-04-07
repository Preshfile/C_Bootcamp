void my_putstr(char *str) {
//output each character one at a time.

for (char *ptr = str; *ptr != '\0'; ptr++)
putchar(*ptr);
  
  
}