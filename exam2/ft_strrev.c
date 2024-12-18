/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:03:14 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:03:16 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrev(char *str)
{
    int i = 0;
    int j;
    char temporary;

    // Comprobar si la cadena no es nula
    if (!str)
        return '\0';

    // Calcular la longitud de la cadena
    while (str[i])
        i++;

    // Ajustar el índice de j al último carácter válido (no el '\0')
    j = i - 1;

    // Invertir la cadena copiando desde el final hacia el principio
    while (i > j)
    {
        temporary = str[j];
        str[j] = str[i];
        str[i] = temporary;
        i--;
        j++;
    }

    return str;
}
//es un swap caracter por caracter

