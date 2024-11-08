#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

int    ft_printf(char const *word ,...)
{
    va_list        arg;
    va_start    (arg,word);
    int            i;
    char*        posi = va_arg(arg, char*);
    size_t num = strlen(posi);
    int            len;

    len = 0;
    i    =    0;
    while (word[i])
    {
        if (word[i] == '%' && word[i + 1] == 's' )
        {
          write(1,posi,num);
          i++;
          len ++;
        }
        else
        {
        write (1, &word[i], 1);
        len++;
        }
        i++;
    }
    va_end (arg);
    return len;
}



int    main(void)
{
    char c[] = "hola mundo";

    ft_printf("el 1 texto dice %s",c);
}






#include <stdarg.h>
#include <string.h>
#include <stdlib.h>

int    ft_printf(char const *word ,...)
{
    va_list        arg;
    va_start    (arg,word);
    int            i;
    char *posi = va_arg(arg, char*);
    char **str =&posi;
    size_t num = strlen(*str);
    int            len;

    len = 0;
    i    =    0;
    while (word[i])
    {
        if (word[i] == '%' && word[i + 1] == 'p' )
        {
          write(1,str,num);
          i++;
          len ++;
        }
        else
        {
        write (1, &word[i], 1);
        len++;
        }
        i++;
    }
    va_end (arg);
    return len;
}



int    main(void)
{
    char *p = "hola mundo";

    ft_printf("el 1 texto dice %p",p);
}