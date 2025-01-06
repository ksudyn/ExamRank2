/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:23:55 by ksudyn            #+#    #+#             */
/*   Updated: 2024/11/28 17:23:57 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
    int     i = 0;

    while (s[i] != '\0')
    {
	int j = 0;
        while (reject[j] != '\0')
        {
            if(s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}
//esta funcion busca la primera letra de la cadena 's' que tambien esté en la cadena 'reject'
// en el bucle principal recorremos 's' con 'i' y dentro de ese bucle iniciamos otro
// donde recorremos 'reject' con 'j' y dentro comparamos el caracter s[i] con reject[j]
//si coinciden se devuelve 'i', que es la posicion de s donde coinciden
// si no, se avanza en 'j' hasta llegar al final de 'reject'
// si se llega al final de 'reject' se avanza en 'i' y se resetea 'j' a 0
//para comparar todos los caracteres de 's' con todos los caracteres de 'reject'
//si al final no se encuentar ningun caracter de 's' dentro de 'reject' se devuelve 'i'.
//COMPROBADO
