#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "ft_printf.h"

int   ft_putstr(char *str)
{
  int count;
  size_t i;

  count = 0;
  i = 0;

if (str == NULL)
		return (write(1, "(null)", 6));
  while (str[i])
  {
     count += ft_putchar(str[i]);
		i++;
  }
  return (count);
}
