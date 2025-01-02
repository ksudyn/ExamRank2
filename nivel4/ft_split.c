/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:17:26 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:17:28 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_strncpy(char *s1, const char *s2, int num)
{
    int i = 0;

    while (i < num && s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    while (i < num)
    {
        s1[i] = '\0';
        i++;
    }
    return s1;
}

char	**ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int word = 0;
	
	while (str[i])
	{
        // Saltar los separadores (espacios, tabulaciones, saltos de línea)
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
        // Si encontramos un carácter que no sea separador, hay una palabra
		if (str[i])
			word++;
        // Avanzar hasta el final de la palabra
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	
	char **out = (char **)malloc(sizeof(char *) * (word + 1));
    //reserva memoria para almacenar los punteros a las palabras, no para las palabras mismas
	i = 0;
	
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if (i > j)
		{
			out[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(out[k++], &str[j], i - j);
		}
	}
	out[k] = NULL;
	return (out);
}
//se ignorad (espacios, tabulaciones, saltos de línea), al encontra un caracter diferente
//se usa j como puntero de inicio de palabra, se sigue sumando i hasta volver a encontar,
//(espacios, tabulaciones, saltos de línea).
//se comprueba que haya una palabra si i es mayor que j y usando las direcciones de memoria reservadas
//anteriormente usamos k como indice para ir en orden y usamos malloc para reservar memoria para esa palabra
//y con la funcion ft_strncpy se copia la palbra en 
//out[k++], desde &str[j], una cantidad dei -j, y el espacio restante se pone NULL.
//al final se devuelve out 
//COMPROBADO