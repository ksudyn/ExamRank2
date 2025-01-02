/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:43:20 by ksudyn            #+#    #+#             */
/*   Updated: 2024/11/21 19:43:23 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	
	while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
//compara dos cadenas de caracteres y si son diferentes devuelve la diferencia
//con el mismo iterador recorro s1 y s2 siempre que ningunoo sea nulo o llegue a nulo
//y si los caracteres son iguales se avanza en i para pasar al siguiente caracter
// en el momento en que se diferencian en un caracter se devuelve su diferencia en los valores (ASCII)
//esto se consigue restando s1 - s2, si s1 es mayo el resultado es positivo y si no es negativo
//si son iguales el resultado es 0
//COMPROBADO
