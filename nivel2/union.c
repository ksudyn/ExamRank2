/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:07:04 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:07:07 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int main(int argc, char **argv)
{
	if(argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}

	int i = 0;
	int j = 0;
	unsigned char seen[256] = {0};

	while(argv[1][i])
	{
		if (!seen[(unsigned char)argv[1][i]])  // Si el carácter no ha sido impreso
		{
			write(1, &argv[1][i], 1);  // Imprime el carácter
			seen[(unsigned char)argv[1][i]] = 1;  // Marca el carácter como impreso
		}
		i++;
	}
	while(argv[2][j])
	{
		if (!seen[(unsigned char)argv[2][j]])  // Si el carácter no ha sido impreso
		{
			write(1, &argv[2][j], 1);  // Imprime el carácter
			seen[(unsigned char)argv[2][j]] = 1;  // Marca el carácter como impreso
		}
		j++;
	}
	write(1, "\n", 1);
	return (0);
}
//es como el inter pero aqui primero comprobamos los caracteres del primer argumento
//y al terminar comprobamos el segundo
//por que lo que se pide no es comparar los caracteres de ambos argumentos
//si no escribir una sola vez cada caracter que aparece en los dos argumentos
