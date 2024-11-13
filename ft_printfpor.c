/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfpor.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 07:25:12 by patferna          #+#    #+#             */
/*   Updated: 2024/11/13 07:25:12 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int    ft_printf(char const *word ,...)
{
    va_list        arg;
    va_start    (arg,word);
    int            i;
    char        *posi = va_arg(arg, char*); 
    int            len;

    len = 0;
    i    =    0;
    while (word[i])
    {
        if (word[i] == '%' && word[i + 1] == '%' )
        {
         write(1, "%", 1);
    return (1);
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
    char c[] = "hola";

    ft_printf("pato %%",c);
}