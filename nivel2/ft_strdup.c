/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:02:22 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:02:24 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>//para malloc

char	*ft_strdup(char *src)
{
	int	i = 0;
	int	len = 0;
	char	*strcpy;

	while (src[len])
		len++;
	strcpy = malloc(sizeof(*strcpy) * (len + 1));
	if (strcpy != NULL)
	{
		while (src[i])
		{
			strcpy[i] = src[i];
			i++;
		}
		strcpy[i] = '\0';
	}
	return (strcpy);
}
//crea una nueva cadena que es una copia exacta de la cadena original.
//La nueva cadena es dinámicamente asignada en memoria,
//lo que significa que el espacio de memoria para ella es reservado por la función
//se crea una nueva direccion de memoria y se reserva memoria suficiente para guardar el contenido de 'src'
// y luego es un ft_strcpy
//COMPROBADO