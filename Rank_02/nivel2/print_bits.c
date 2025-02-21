/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:05:19 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:05:20 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char 	bit;

	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}
//La función imprime el valor de un byte en binario
//octet >> i mueve los bits hacia la derecha tantas veces como indique el valor de i
//Así, en cada ciclo del while, obtenemos el siguiente bit
//el operador & con 1 se asegura de que solo obtenemos el bit más a la derecha
//El + '0' convierte ese bit de número (que es 0 o 1) en un carácter
//COMPROBADO