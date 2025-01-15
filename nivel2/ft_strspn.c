/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:03:34 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:03:35 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>//para usar size_t

size_t ft_strspn(const char *s, const char *accept)
{
    int count = 0;
    int i = 0;;
    int j;

    // Iteramos sobre cada carácter de la cadena s
    while (s[i])
    {
        j = 0;  // Reiniciamos j para cada nuevo carácter de s
        // Verificamos si el carácter actual de s está en accept
        while (accept[j])
        {
            if (s[i] == accept[j])  // Si encontramos una coincidencia
                break;  // Salimos del ciclo
            j++;
        }
        
        // Si no encontramos ninguna coincidencia en accept
        if (accept[j] == '\0')
            return count;  // Retornamos el número de caracteres coincidentes

        count++;  // Si encontramos una coincidencia, incrementamos el contador
        i++;  // Avanzamos al siguiente carácter de s
    }

    return count;  // Si llegamos al final de s, retornamos el contador
}
//El ciclo while (s[i]) recorre cada carácter de la cadena s hasta llegar al final (\0).
//Para cada carácter de s, el ciclo while (accept[j]) recorre la cadena accept desde el principio
//Si encontramos una coincidencia (es decir, s[i] == accept[j]), se sale del ciclo con break
//Si no, retornamos el valor de count, ya que eso indica que hemos encontrado un carácter de s que no pertenece a accept
//Si encontramos una coincidencia, incrementamos count y avanzamos al siguiente carácter de s con i++
//y reseteamos i a 0 para empezar accept desde el principio
//solo cuenta los caracteres consecutivos desde el inicio de s que están en accept
//tienen que estar en orden en s pero no en accept