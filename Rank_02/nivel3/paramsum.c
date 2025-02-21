/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:22:59 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:23:01 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putnbr(int n)
{
	char num;

	if (n >= 10)
		ft_putnbr(n / 10);
    num = (n % 10) + '0';
	write(1, &num, 1);
}

int main(int argc, char **argv)
{
    if(argc == 1)
    {
        write(1, "0\n", 2);
        return (0);
    }

    ft_putnbr(argc - 1);
    write(1, "\n", 1);
    return(0);
}
//Este programa cuenta cuántos argumentos se le pasan y los muestra en la pantalla.
//Si no se pasan argumentos, imprime "0". Si se pasan, imprime cuántos hay, seguido de un salto de línea.
//La función ft_putnbr es la que se encarga de imprimir números en la pantalla.
//La función ft_putnbr divide el número en partes más pequeñas hasta que tiene un dígito solo.
//lo convierte en un carácter sumando '0' para convertirlo en un caracter y lo imprime en la pantalla.
//Lo hace de manera recursiva (se llama a sí misma) para cada dígito del número.
//COMPROBADO