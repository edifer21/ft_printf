/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-19 13:01:58 by patferna          #+#    #+#             */
/*   Updated: 2024-11-19 13:01:58 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	unsigned long	address;
	char			*hex_digits;
	char			buffer[20];
	int				i;
	int				count;

	i = 0;
	hex_digits = "0123456789abcdef";
	if (ptr == NULL)
		return (write(1, "(nil)", 5));
	count = 0;
	address = (unsigned long)ptr;
	count += ft_putstr("0x");
	while (address > 0)
	{
		buffer[i++] = hex_digits[address % 16];
		address /= 16;
	}
	if (i == 0)
		buffer[i++] = '0';
	while (i-- > 0)
		count += ft_putchar(buffer[i]);
	return (count);
}
