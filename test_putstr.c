#include <stdio.h>

int ft_putstr(char *str);  // Asegúrate de declarar la función si está en otro archivo

int main() {
    char *str = "Hola, este es un test de ft_putstr.";

    // Llamar a la función que imprime la cadena
    ft_putstr(str);

    return 0;
}
