/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pruebas.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patferna <patferna@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:25:37 by patferna          #+#    #+#             */
/*   Updated: 2024/11/12 15:25:37 by patferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdarg.h>
#include <unistd.h>
#include <string.h>

int    myprintf(char const *str ,...)
{
  va_list arg;
  va_start (arg,str);
  char *posi = va_arg(arg,char*);
  while (*str)
  {
    if (*str == '%')
    {
      str++;
      if(*str == 's') 
      {
         write(1,posi,strlen(posi));
    
      }
    
    }
    str++;
  }
  
  va_end(arg);
}

int main() 
{
  char ptr [] = "hola maundo";
  myprintf("imprime %s",ptr);
  return 0;
}


/*
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

int    myprintf(char const *str ,...)
{
    va_list arg;
    va_start(arg, str); // Se pasa 'str' aquí, no '*str'
    int count = 0;  // Contador de caracteres impresos

    while (*str) {
        if (*str == '%') { // Solo tratamos los formatos precedidos por '%'
            str++; // Avanzamos un carácter para ver el especificador de formato
            if (*str == 's') {
                char *posi = va_arg(arg, char*);
                count += write(1, posi, strlen(posi)); // Imprimir la cadena
            }
        } else {
            write(1, str, 1); // Imprimir carácter literal
            count++; // Contabilizamos el carácter impreso
        }
        str++; // Avanzamos en la cadena de formato
    }

    va_end(arg);
    return count; // Retornamos la cantidad de caracteres impresos
}

int main() 
{
    char ptr[] = "hola mundo";
    myprintf("imprime %s", ptr);  // Debería imprimir: imprime hola mundo
    return 0;
}
*/