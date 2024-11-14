/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-05 11:32:16 by patferna          #+#    #+#             */
/*   Updated: 2024-11-05 11:32:16 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdint.h>
#include "ft_printf.h"

int		ft_printf(char const *word, ...);
int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_putptr(void *ptr);
int	    ft_putnbr(int n);
int		ft_putnbr_u(unsigned int n);
int		ft_putnbr_hex(unsigned long n);
int		ft_putnbr_hex_m(unsigned long n);


#endif