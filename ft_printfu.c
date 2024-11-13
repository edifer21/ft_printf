/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 06:59:48 by patferna          #+#    #+#             */
/*   Updated: 2024/11/13 06:59:48 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_printf.h"

void ft_putchar_fd(char c, int fd) {
    write(fd, &c, 1);
}

void ft_putstr_fd(char *s, int fd) {
    size_t len;

    if (!s)
        return;
    len = strlen(s);
    write(fd, s, len);
}
void    ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
    {
        ft_putstr_fd("2147483648", fd);
        return ;
    }
    if (n < 0)   
        n = -n; 
    if (n >= 10)
        ft_putnbr_fd(n / 10, fd);
    ft_putchar_fd((n % 10 + 48), fd);
}


int    ft_printf(char const *word ,...)
{
    va_list        arg;
    va_start    (arg,word);
    int            i;
    int        posi = va_arg(arg, int); 
    int            len;

    len = 0;
    i    =    0;
    while (word[i])
    {
        if (word[i] == '%' && word[i + 1] == 'u' )
        {
          ft_putnbr_fd(posi, 1);
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
    int n = 0;

    ft_printf("pato %u",n);
}