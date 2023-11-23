# ft_printf
Because ft_putnbr() and ft_putstr() aren’t enough__
The goal of this project is pretty straightforward. recode printf() c finction.

# library
Write a library that contains ft_printf(), a function that will mimic the original printf():__
__
-Program name        : libftprintf.a__
-Turn in files       : Makefile, *.h, */*.h, *.c, */*.c__
-Makefile            : NAME, all, clean, fclean, re__
-External functs     : malloc, free, write,__
                      va_start, va_arg, va_copy, va_end__
-Libft authorized    : Yes__
-Description         : Write a library that contains ft_printf(), a__
                      function that will mimic the original printf()__

The prototype of ft_printf() is:__
__
  int ft_printf(const char *, ...);__
__
Here are the requirements of the projet:__
__
• Don’t implement the buffer management of the original printf().\n
• Your function has to handle the following conversions: cspdiuxX%
• Your function will be compared against the original printf().
• You must use the command ar to create your library.
    Using the libtool command is forbidden.
• Your libftprintf.a has to be created at the root of your repository.

You have to implement the following conversions:

• %c Prints a single character.
• %s Prints a string (as defined by the common C convention).
• %p The void * pointer argument has to be printed in hexadecimal format.
• %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign.

# resources

https://azrael.digipen.edu/~mmead/www/Courses/CS120/VariadicFunctions.html#STACKS
