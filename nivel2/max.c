/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:04:49 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:04:51 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int max(int *tab, unsigned int len)
{
	int result;
    int i = 0;
	
	if (len == 0)
		return (0);
	result = tab[i];
	while(i < len)
	{
		if (result <  tab[i])
        {
			result = tab[i];
        }
        i++;
	}
	return result;
}
//El primer parámetro es un array de enteros (int), y el segundo es el número de elementos en el array.
//La función devuelve el número más grande encontrado en el array.
//Si el array está vacío, la función devuelve 0
//COMPROBADO