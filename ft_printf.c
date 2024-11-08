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

int    ft_printf(char const *word ,...)
{
	va_list		arg;
	va_start	(arg,word);
	int			i;
	char		posi = va_arg(arg, int); 
	int			len;

	len = 0;
	i    =    0;
	while (word[i])
	{
		if (word[i] == '%' && word[i + 1] == 'c' )
		{
		  write(1,&posi,1);
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
	char c = 'a';

	ft_printf("pato %c",c);
}