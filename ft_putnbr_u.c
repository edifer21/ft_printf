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

#include "ft_printf.h"

int	ft_putnbr_u(unsigned int n)
{
	int		count;

	count = 0;
	if (n > 9)
		count += ft_putnbr_u(n / 10);
	count += ft_putchar((n % 10) + 48);
	return (count);
}
