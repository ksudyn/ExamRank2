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
    int i = 7; // Comienza desde el bit más significativo (índice 7)
    unsigned char bit;

    while (i >= 0) // Recorre todos los bits del byte
    {
        bit = ((octet >> i) & 1) + '0'; // Obtiene el bit en la posición i
        write(1, &bit, 1); // Imprime el bit
        i--; // Decrementa i para pasar al siguiente bit
    }
}

