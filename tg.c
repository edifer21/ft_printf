#include <stdio.h>
#include "ft_printf.h"

int main() 
{
    int p_result;
	int u_result;

    unsigned int x = 0;
x = 2147483647;
	p_result = printf("%d\n", x);
	u_result = ft_printf("%d\n", x);

}

