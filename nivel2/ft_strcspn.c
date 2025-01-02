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
//esta funcion calcula la longitud del segmento inicial de la cadena 's' que no contiene
//ninguno de los caracteres presentes en la cadena 'reject'
// en el bucle principal recorremos 's' con 'i' y dentro de ese bucle iniciamos otro
// donde recorremos 'reject' y dentro comparamos el caracter s[i] con el caracter reject[j]
//si coinciden se devuelve el 'i' si no se avanza en 'j' hasta llegar al final de 'reject'
// si se llega al final de 'reject' se avanza en 'i' y se resetea j a 0
//para compararlo con todos los caracteres de 's' dentro de 'j'
//si al final no se encuentar ningun caracter de 's' dentro de 'reject' se devuelve 'i'
//COMPROBADO
