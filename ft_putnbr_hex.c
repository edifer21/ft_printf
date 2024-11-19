/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-19 12:42:26 by patferna          #+#    #+#             */
/*   Updated: 2024-11-19 12:42:26 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hex(unsigned long n)
{
	char	*hex_digits;
	char	buffer[20];
	int		i;
	int		count;

	hex_digits = "0123456789abcdef";
	i = 0;
	count = 0;
	if (n == 0)
	{
		count += ft_putchar('0');
		return (count);
	}
	while (n > 0)
	{
		buffer[i++] = hex_digits[n % 16];
		n /= 16;
	}
	while (i-- > 0)
		count += ft_putchar(buffer[i]);
	return (count);
}
