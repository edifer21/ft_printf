#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "ft_printf.h"

int    myprintf(char const *str ,...)
{
  va_list arg;
  va_start (arg,str);
  int i;
  char *posi;
  
  i = 0;
  posi = va_arg(arg,char*);
  while (*str)
  {
    if (*str == '%' && *(str + 1) == 's')
    {
        i+= write(1,posi,strlen(posi));
        str++;
    } 
    else
    {
      write(1,str,1);
      i++;
    }
    str++;
  }
  return (i);
  va_end(arg);
}

int main() 
{
  char ptr [] = "hola maundo";
  myprintf("imprime %s",ptr);
  return 0;
}

