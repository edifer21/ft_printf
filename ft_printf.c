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
	int	len;
	int	i;

	len = 0;
	i = 0;

	if (word == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (word == 's')
		return (ft_printfs(va_arg(arg, char *)));
	else if (word == 'p')
		return (ft_printf_ei(va_arg(arg, uintptr_t)));
	else if (word == 'd' || word == 'i')
		return (ft_printfu(va_arg(arg, int)));
	else if (word == 'u')
		return (ft_print_unsigned(va_arg(arg, unsigned int)));
	else if (word == 'x')
		return (ft_printfx(va_arg(arg, unsigned int), "0123456789abcdef"));
	else if (word == 'X')
		return (ft_printfhexm(va_arg(arg, unsigned int), "0123456789ABCDEF"));
	else if (word == '%')
		return (ft_putchar('%'));
	return (1);
}

int	ft_printf(char const *word ,...)
{
	va_list		arg;
	int			i;
	int			len;

	va_start(arg, word);
	len = 0;
	i = 0;
	while (word[i])
	{
		if (word[i] == '%')
		{
			len += converter(word[i + 1], arg);
			i++;
		}
		else
			len += ft_putchar(word[i]);
		i++;
	}
	va_end(args);
	return (length);
}


int    main(void)
{
	char c = 'a';

	ft_printf("pato %c",c);
}