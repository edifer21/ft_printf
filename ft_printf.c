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

#include "libftprintf.h"
#include <stdarg.h>

int	ft_printf(char const * c, ...)
{
	write(1, &c, 1);

}

int	main(void)
{
	char *c = "abc";

	ft_printf(c);

}



#include <stdarg.h>
#include <stdio.h>

int suma(int sum, ...) 
{
    va_list args;
    int total = 0;

    va_start(args, sum);
    for (int i = 0; i < 10; i++) 
    {
        sum += va_arg(args, int);
    }
    va_end(args);

    return total;
}


int main() 
{
    printf("Suma de 3, 5 y 10: %d\n", suma( 2, 3, 5, 10)); // Resultado: 18
    return 0;
}
/*
#include <stdarg.h>
#include <stdio.h>

int suma(int count, ...) {
    va_list args;
    int total = 0;

    va_start(args, count);
    for (int i = 0; i < count; i++) {
        total += va_arg(args, int);
    }
    va_end(args);

    return total;
}

int main() {
    printf("Suma de 3, 5 y 10: %d\n", suma( 3, 5, 10)); // Resultado: 18
    return 0;
}
*/