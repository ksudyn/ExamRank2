/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:02:48 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:02:50 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
    int j = 0;
	
	if (!s1 || !s2)
		return (0);
	while(s1[i])
	{
		j = 0;
	   	while(s2[j])
		{
			if(s1[i] == s2[j])
				return (char *)(s1 + i);// Devuelve la posición de s1 donde ocurrió la coincidencia
			j++;
		}
		i++;	
	}
	return (NULL);
}
//busca el primer carácter de s1 que esté presente en s2.
//si lo encuentra devuelve un puntero a ese carácter
//si no devuelve NULL