/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfhedxmy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 07:11:50 by patferna          #+#    #+#             */
/*   Updated: 2024/11/13 07:11:50 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_printf.h"

int	ft_putnbr_hex(unsigned long n)
{
    char hex_digits[] = "0123456789ABCDEF";
    char buffer[20];
    int i;
    int count;

    i =  0;
    count = 0;
    count += ft_putstr_fd("0x");

    while (n > 15) 
    {
        buffer[i++] = hex_digits[n % 16];
        n /= 16;
    }

    while (i-- > 0) 
    count += ft_putchar(buffer[i]);
    return (count);
}