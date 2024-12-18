/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:15:55 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:15:56 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int lennbr(int nbr)
{
	int i;

	if (nbr == 0)
		return (1);
	i = 0;
	while (nbr != 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

int sign(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

char	*ft_itoa(int nbr)
{
	char *num;
	int len;
	int i;

	len = lennbr(nbr);
	i = 0;
	if (nbr < 0)
		i++;
	len = len + i;
	num = (char *)malloc((len + 1) * sizeof(char));
	if (!num)
		return (NULL);
	if(nbr < 0)
		num[0] = '-';

	num[len] = '\0';
	while ((len - 1) >= i)
	{
		num[len - 1] = (nbr % 10) + '0';
		nbr /= 10;
		len--;
	}
	return (num);
}
//aqui convertimos un numero int en una cadena char
//con int lennbr calculamos la longitud de un numero entero en su representacion decimal
// con sign detecatmos el signo del numero
//en len se guarda la longitud del numero
//Si el número es negativo (nbr < 0), se incrementa la longitud len en 1 para incluir el signo '-'
//El dígito se convierte a su representación en ASCII sumándole '0'
//