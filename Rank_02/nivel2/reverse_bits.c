/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:05:39 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:05:41 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char res = 0;
	int i = 0;
	while(i < 8)
	{
		res = res << 1;
		res = res | (octet & 1);
		octet = octet >> 1;
		i++;
	}
	return (res);
}