# Welcome to My Printf
Welcome to My Printf.
This program is a custom implementation of the printf function in C. 
It allows the user to print to the standard output (stdout) using a similar syntax 
to the standard printf function. The program uses variable arguments (va_list, va_start, va_arg) 
to handle an arbitrary number of arguments passed to the function. 
The program checks for the presence of a '%' character in the format string, 
indicating that a variable argument should be printed. Depending on the character following the '%', 
the program will handle the argument as a different type 
(e.g. 'd' or 'i' for integers, 'o' for octal, 'u' for unsigned integers, and 'x' for hexadecimal). 
Additionally, the program checks if the format string is null and returns an error message in that case.

## Task
Write a Printf Program.
The my_printf() function produce output according to a format as described below. 
The my_printf() functions write output to stdout, the standard output stream;
This function writes the output under the control of a format string that specifies how 
subsequent arguments (or arguments accessed via the variable-length argument facilities of stdarg(3)) 
are converted for output.

The format string is composed of zero or more directives: ordinary characters (not PERCENT), 
which are copied unchanged to the output stream; and conversion specifications, 
each of which results in fetching zero or more subsequent arguments.

Each conversion specification is introduced by the PERCENT character. 
The arguments must correspond properly (after type promotion) with the conversion specifier. 
After the PERCENT, the following appear in sequence:

doux The int (or appropriate variant) argument is converted to signed decimal (d). unsigned octal (o), 
unsigned decimal (u), unsigned hexadecimal (x).
c The int argument is converted to an unsigned char, and the resulting character is written.
s The char * argument is expected to be a pointer to an array of character type (pointer to a string). 
Characters from the array are written up to (but not including) a terminating NUL character.
p The void * pointer argument is printed in hexadecimal.

Requirements
Your code must be compiled with the flags -Wall -Wextra -Werror.
Hint(s)
• man printf
• man 3 stdarg
• Watch out for memory leaks !
• You can test your code against memory errors by compiling with the debugging flags -g3 -fsanitize=address
• Global variables are strictly FORBIDDEN
• Static variables are strictly FORBIDDEN
Authorized function(s)
• write(2)
• malloc
• free
• va_start, va_arg, va_copy, va_end (see man 3 stdarg)
(Obvious) Unauthorized functions
printf and co. (fprintf, sprintf, snprintf, asprintf, dprintf, vprintf, vfprintf, vsprintf, vsnprintf, vasprintf, vdprintf)
Multiline macros are forbidden
Include another .c is forbidden
Macros with logic (while/if/variables/...) are forbidden

## Description
Solution
This problem was solved by creating a custom implementation of the printf function in C. 
The implementation uses the C standard library's va_list, va_start, and va_arg macros 
to handle variable arguments passed to the function. The function iterates through the format string 
passed to it, and when it encounters a '%' character, it checks the next character 
to determine the type of argument to expect (e.g. 'd' for int, 'x' for hexadecimal, etc.). 
It then uses a series of switch cases to handle the different types of arguments, 
converting them to strings and writing them to stdout using the write function from unistd.h. 
The function also includes error handling for a null format string and a reverse the string section 
to make the output readable.

## Installation
To install and run this program, you will need a C compiler such as GCC.
First, create a new file with the code provided and save it with a .c extension, 
for example, "my_printf.c".
Open a terminal or command prompt, navigate to the directory where the file is saved, 
and run the command "gcc -o my_printf my_printf.c" to compile the code. 
This will create an executable file named "my_printf"


## Usage
Run the program by typing "./my_printf" followed by any desired format string 
and variables you want to pass to it. For example, "./my_printf" "%d %u %x\n" 10 20 30"
The program will execute and print the output to the terminal or command prompt.
Alternatively, you can use an IDE (Integrated Development Environment) like Code::Blocks, 
Visual Studio Code or Eclipse to run and debug your program.

### The Core Team
This project was written by Precious Oranye - 
a software engineering student at Qwasar - OGTL Academy.
This project is one of the many projects to be completed 
to move to the next phase of the program.

<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
