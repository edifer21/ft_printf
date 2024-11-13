#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "ft_printf.h"

char    *search(char word,va_list arg)
{
    if (word == '%' && word + 1 == 'c' )
        return((va_arg(arg, int)));
    else if (word == '%' && word+ 1 == 's' )
        return (ft_printf_s.c(va_arg(arg,char*)));
    else if (word == '%' && word + 1 == 'p' )
        return(ft_printf_p.c(va_arg(arg,char*)));
    else if (word == '%' &&( word+ 1 == 'i' || 'd') )
        return(ft_printf_ei.c(va_arg(arg, int)));
    else if (word == '%' && word+ 1 == 'u') 
        return(ft_printfu.c(va_arg(arg, int)));
    else if (word == '%' && word+ 1 == 'x' )
        return(ft_printfx.c(void *ptr, int fd));
    else if (word == '%' && word + 1 == 'X' )
        return(ft_printhedxmy.c(buffer[i], fd));
    else if (word == '%' && word + 1 == '%' )
        return(ft_printfpor.c( ft_printf(char const *word ,...)));
}


int    ft_printf(char const *word ,...)
{
    va_list        arg;
    va_start    (arg,word);

    int            i;

    int            len;

    len = 0;
    i    =    0;
    while (word[i])
    {
        char *search(arg)
    }
    va_end (arg);
    return len;
}


int    main(void)
{
    char c = 'a';

    ft_printf("pato %c",c);
}tf(char const *word ,...));