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
	
	if (!s1 || !s2)
		return (0);
	while(s1[i])
	{
		int j = 0;
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
//La función ft_strpbrk recibe dos cadenas de caracteres (s1 y s2)
//y devuelve la primera aparición de cualquier carácter de s2 dentro de s1
//Si no se encuentra ninguna coincidencia, devuelve NULL
//se utiliza char * porque se pide un retorno de puntero
//s1 es un puntero a la primera posición de la cadena.
//Cuando haces s1 + i, estás desplazándote i posiciones hacia adelante en la cadena s1.
//Es decir, s1 + i apunta a la dirección de memoria del carácter s1[i] en la cadena.