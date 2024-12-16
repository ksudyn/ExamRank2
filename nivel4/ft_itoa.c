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
	num[0] = '-';
	num[len] = '\0';
	while ((len - 1) >= i)
	{
		num[len - 1] = sign(nbr % 10) + '0';
		nbr /= 10;
		len--;
	}
	return (num);
}
