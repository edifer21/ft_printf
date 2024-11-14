/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 05:45:21 by patferna          #+#    #+#             */
/*   Updated: 2024/11/13 05:45:21 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "ft_printf.h"

void	ft_putptr(void *ptr)
{
	unsigned long address = (unsigned long)ptr; 
	char hex_digits[] = "0123456789abcdef";
	char buffer[20];
	int i = 0;
	int	count;

	address = (unsigned long)ptr; 
	count += ft_putstr_fd("0x");

	while (address > 0) {
		buffer[i++] = hex_digits[address % 16];
		address /= 16;
	}

	while (i-- > 0)
	{
		count += ft_putchar(buffer[i]);
	}
	return (count);
}
