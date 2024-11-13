/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfhedxmy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 07:11:50 by patferna          #+#    #+#             */
/*   Updated: 2024/11/13 07:11:50 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_printf.h"

void ft_putchar_fd(char c, int fd) {
    write(fd, &c, 1);
}

void ft_putstr_fd(char *s, int fd) {
    size_t len;

    if (!s)
        return;
    len = strlen(s);
    write(fd, s, len);
}

int ft_puthex_fd(int ptr, int fd) 
{
    unsigned long address = (unsigned long)ptr; 
    char hex_digits[] = "0123456789ABCDEF";
    char buffer[20];
    int i = 0;

    ft_putstr_fd("0x", fd);

    while (address > 0) {
        buffer[i++] = hex_digits[address % 16];
        address /= 16;
    }

    while (i-- > 0) {
        ft_putchar_fd(buffer[i], fd);
    }
}

int main(void)
{
    int n = 47898902;  
    int fd = 1;  
    
    ft_puthex_fd(n, fd);  
    return 0;
}