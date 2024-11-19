/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prntf_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-05 11:55:44 by patferna          #+#    #+#             */
/*   Updated: 2024-11-05 11:55:44 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "ft_printf.h"

int	search(char word, va_list arg)
{
	int		count;

	count = 0;
	if (word == 'c')
		count += ft_putchar(va_arg(arg, int));
	else if (word == 's')
		count += ft_putstr(va_arg(arg, char *));
	else if (word == 'p')
		count += ft_putptr(va_arg(arg, void *));
	else if (word == 'd' || word == 'i')
		count += ft_putnbr(va_arg(arg, int));
	else if (word == 'u')
		count += ft_putnbr_u(va_arg(arg, unsigned int));
	else if (word == 'x')
		count += ft_putnbr_hex(va_arg(arg, unsigned int));
	else if (word == 'X')
		count += ft_putnbr_hex_m(va_arg(arg, unsigned int));
	else if (word == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(char const *word, ...)
{
	va_list		arg;
	size_t		i;
	int			count;

	va_start(arg, word);
	count = 0;
	i = 0;
	while (word[i])
	{
		if (word[i] == '%' && word[i + 1])
			count += search(word[++i], arg);
		else
			count += ft_putchar(word[i]);
		i++;
	}
	va_end(arg);
	return (count);
}
