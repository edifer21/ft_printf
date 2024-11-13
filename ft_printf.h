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

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdint.h>
#include "ft_printf.h"

int		ft_printf(char const *format, ...);
int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_strlen( const char *str);
void	ft_putchar_fd(char c, int fd);
int		ft_print_ptr(uintptr_t ptr);
int		ft_putnbr(int n);
int		ft_print_unsigned(unsigned int num);
int		ft_print_hex(unsigned int nr, char *base);


#endif