/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:06:36 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:06:38 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}
//lo que hace es intercambu¡iatr los bits en bloques de 4 
// este [ 1011 0010 ]
//lo convierte en este [ 0010 1011 ]
//La operación se realiza comparando cada bit correspondiente de los dos operandos usando |
//Si al menos uno de los bits es 1, el resultado es 1.
//Si ambos bits son 0, el resultado es 0