/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:24:35 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:24:37 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int ft_atoi(char *str)
{
    int result = 0; // Para guardar el número final
    int sign = 1;   // Para saber si es positivo o negativo
    int i = 0;      // Índice para recorrer la cadena
    int digit = 0;  // Para almacenar el valor numérico temporal de un carácter

    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
    {
        i++;
    }
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[i] == '+')
    {
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        digit = str[i] - '0';// Convierte el carácter en su valor numérico
        result = (result * 10) + digit; // Agregar el dígito al resultado
        i++;
    }

    return (sign * result);
}

void	ft_putnbr(int nb)
{
	if (nb / 10 > 0)
		ft_putnbr(nb / 10);
	
    char digit = nb % 10 + '0';
	write(1, &digit, 1);
}

int main(int argc, char **argv)
{
    if(argc == 1)
    {
        write(1, "\n", 1);
        return (0);
    }

    int i = 1;
    int num = ft_atoi(argv[1]);

    while(i <= 9 && num <= 238609294)
    {
         ft_putnbr(i);
         write(1, " x ", 3);
         ft_putnbr(num);
         write(1, " = ", 3);
         ft_putnbr(i * num);
         write(1, "\n", 1);
         i++;
    }
    return (0);
}
//es un tabla de multiplicar que tiene que aceptar y dar un resultado a numeros que entren en un int
// uso el atoi para convertir los caracteres numéricos en un número entero
// con ft_putnbr convertimos cada digito en su caracter correspondiente sumando '0' y lo imprimimos en pantalla
//i es el numero entre 1 y 9 que multiplica a num
//en el main convertimos num con atoi y ese es el numero que se multiplica
///COMPROBADO