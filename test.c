#include <stdio.h>
#include <stdlib.h>
#include "ft_printf.h"
#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"

int	main(void)
{
	int p_result;
	int u_result;
/*
	//0 - Prueba normal
	printf(YEL "---0: Prueba normal---\n" RESET);
	p_result = printf("hola\n");
	u_result = ft_printf("hola\n");
	printf(CYN "Printf: %d" RESET "\n" GRN "ft_printf: %d" RESET "\n", p_result, u_result);

	//1 - Prueba con char
	printf(YEL "---1: Prueba con char---\n" RESET);
	printf(MAG "char normal: a" RESET "\n");
	char    c = 'a';
	p_result = printf("%c\n", c);
	u_result = ft_printf("%c\n", c);
	printf(CYN "Printf: %d" RESET "\n" GRN "ft_printf: %d" RESET "\n", p_result, u_result);
	printf("\n");

	printf(MAG "char overflow: a + 256" RESET "\n");
	int     c1 = 'a' + 256;
	p_result = printf("%c\n", c1);
	u_result = ft_printf("%c\n", c1);
	printf(CYN "Printf: %d" RESET "\n" GRN "ft_printf: %d" RESET "\n", p_result, u_result);

	//2 - Prueba con strings
	printf(YEL "---2: Prueba con strings---\n" RESET);
	printf(MAG "str normal" RESET "\n");
	char *str = "pato";
	p_result = printf("%s\n", str);
	u_result = ft_printf("%s\n", str);
	printf(CYN "Printf: %d" RESET "\n" GRN "ft_printf: %d" RESET "\n", p_result, u_result);
	printf("\n");

	printf(MAG "str vacia" RESET "\n");
	str = "";
	p_result = printf("%s\n", str);
	u_result = ft_printf("%s\n", str);
	printf(CYN "Printf: %d" RESET "\n" GRN "ft_printf: %d" RESET "\n", p_result, u_result);
	printf("\n");

	printf(MAG "str NULL" RESET "\n");
	str = NULL;
	p_result = printf("%s\n", str);
	u_result = ft_printf("%s\n", str);
	printf(CYN "Printf: %d" RESET "\n" GRN "ft_printf: %d" RESET "\n", p_result, u_result);

	//3 - Prueba con numeros
	printf(YEL "---3: Prueba con numeros decimales---\n" RESET);
	printf(MAG "numero: 0" RESET "\n");
	int	n = 0;
	p_result = printf("%d\n", n);
	u_result = ft_printf("%d\n", n);
	printf(CYN "Printf: %d" RESET "\n" GRN "ft_printf: %d" RESET "\n", p_result, u_result);
	printf("\n");

	printf(MAG "numero: 5" RESET "\n");
	n = 5;
	p_result = printf("%d\n", n);
	u_result = ft_printf("%d\n", n);
	printf(CYN "Printf: %d" RESET "\n" GRN "ft_printf: %d" RESET "\n", p_result, u_result);
	printf("\n");

	printf(MAG "numero: 100" RESET "\n");
	n = 100;
	p_result = printf("%d\n", n);
	u_result = ft_printf("%d\n", n);
	printf(CYN "Printf: %d" RESET "\n" GRN "ft_printf: %d" RESET "\n", p_result, u_result);
	printf("\n");

	printf(MAG "numero max: 2147483647" RESET "\n");
	n = 2147483647;
	p_result = printf("%d\n", n);
	u_result = ft_printf("%d\n", n);
	printf(CYN "Printf: %d" RESET "\n" GRN "ft_printf: %d" RESET "\n", p_result, u_result);
	printf("\n");

	printf(MAG "numero negativo: -1" RESET "\n");
	n = -1;
	p_result = printf("%d\n", n);
	u_result = ft_printf("%d\n", n);
	printf(CYN "Printf: %d" RESET "\n" GRN "ft_printf: %d" RESET "\n", p_result, u_result);
	printf("\n");

	printf(MAG "numero negativo: -5" RESET "\n");
	n = -5;
	p_result = printf("%d\n", n);
	u_result = ft_printf("%d\n", n);
	printf(CYN "Printf: %d" RESET "\n" GRN "ft_printf: %d" RESET "\n", p_result, u_result);
	printf("\n");

	printf(MAG "numero negativo: -100" RESET "\n");
	n = -100;
	p_result = printf("%d\n", n);
	u_result = ft_printf("%d\n", n);
	printf(CYN "Printf: %d" RESET "\n" GRN "ft_printf: %d" RESET "\n", p_result, u_result);
	printf("\n");

	printf(MAG "numero min: -2147483648" RESET "\n");
	n = -2147483648;
	p_result = printf("%d\n", n);
	u_result = ft_printf("%d\n", n);
	printf(CYN "Printf: %d" RESET "\n" GRN "ft_printf: %d" RESET "\n", p_result, u_result);
	printf("\n");

	//4 - Prueba con hexadecimales
	printf(YEL "---4: Prueba con numeros hexadecimales---\n" RESET);
	printf(MAG "numero: 0" RESET "\n");
	unsigned int x = 0;
	p_result = printf("%x\n", x);
	u_result = ft_printf("%x\n", x);
	printf(CYN "Printf: %d" RESET "\n" GRN "ft_printf: %d" RESET "\n", p_result, u_result);
	printf("\n");

	printf(MAG "numero: 10" RESET "\n");
	x = 10;
	p_result = printf("%x\n", x);
	u_result = ft_printf("%x\n", x);
	printf(CYN "Printf: %d" RESET "\n" GRN "ft_printf: %d" RESET "\n", p_result, u_result);
	printf("\n");

	printf(MAG "numero: 1000" RESET "\n");
	x = 1000;
	p_result = printf("%x\n", x);
	u_result = ft_printf("%x\n", x);
	printf(CYN "Printf: %d" RESET "\n" GRN "ft_printf: %d" RESET "\n", p_result, u_result);
	printf("\n");

	printf(MAG "numero largo: 2147483647" RESET "\n");
	x = 2147483647;
	p_result = printf("%x\n", x);
	u_result = ft_printf("%x\n", x);
	printf(CYN "Printf: %d" RESET "\n" GRN "ft_printf: %d" RESET "\n", p_result, u_result);
	printf("\n");

	printf(MAG "numero max: 4294967295" RESET "\n");
	x = 4294967295;
	p_result = printf("%x\n", x);
	u_result = ft_printf("%x\n", x);
	printf(CYN "Printf: %d" RESET "\n" GRN "ft_printf: %d" RESET "\n", p_result, u_result);
	printf("\n");

	printf(MAG "underflow: -1" RESET "\n");
	int x1 = -1;
	p_result = printf("%x\n", x1);
	u_result = ft_printf("%x\n", x1);
	printf(CYN "Printf: %d" RESET "\n" GRN "ft_printf: %d" RESET "\n", p_result, u_result);
	printf("\n");

	printf(MAG "underflow: -2147483648" RESET "\n");
	x1 = -2147483648;
	p_result = printf("%x\n", x1);
	u_result = ft_printf("%x\n", x1);
	printf(CYN "Printf: %d" RESET "\n" GRN "ft_printf: %d" RESET "\n", p_result, u_result);
	printf("\n");

	//5 - Prueba con porcentaje
	printf(YEL "---5: Prueba con porcentaje---\n" RESET);
	p_result = printf("%%\n");
	u_result = ft_printf("%%\n");
	printf(CYN "Printf: %d" RESET "\n" GRN "ft_printf: %d" RESET "\n", p_result, u_result);
	printf("\n");

	//6 - Prueba con direcciones de memoria
	printf(YEL "---6: Prueba con direcciones de memoria---\n" RESET);
	printf(MAG "Direccion normal" RESET "\n");
	int pato = 2;
	p_result = printf("%p\n", &pato);
	u_result = ft_printf("%p\n", &pato);
	printf(CYN "Printf: %d" RESET "\n" GRN "ft_printf: %d" RESET "\n", p_result, u_result);
	printf("\n");

	printf(MAG "Direccion NULL" RESET "\n");
	p_result = printf("%p\n", NULL);
	u_result = ft_printf("%p\n", NULL);
	printf(CYN "Printf: %d" RESET "\n" GRN "ft_printf: %d" RESET "\n", p_result, u_result);
	printf("\n");

	//7 - Cosas varias
	printf(YEL "---7: Cosas varias---\n" RESET);
	char a = 'a';
	char *word = "palabra";
	int num = 1;
	p_result = printf("La %s: %c es la numero %d del abecedario\n", word, a, num);
	u_result = ft_printf("La %s: %c es la numero %d del abecedario\n", word, a, num);
	printf(CYN "Printf: %d" RESET "\n" GRN "ft_printf: %d" RESET "\n", p_result, u_result);

	int a2 = 123456;	
	p_result = printf("El numero: %x/%X tiene direccion en:%p\n", a2, a2, &a2);
	u_result = ft_printf("El numero: %x/%X tiene direccion en:%p\n", a2, a2, &a2);
}