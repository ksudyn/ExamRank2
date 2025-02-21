/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:21:58 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:22:00 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int start, int end)
{
    int i = 0;
    int len = abs((end - start)) + 1;
    int *res;
    
    res = malloc(sizeof(*res) * len);
    while(i < len)
    {
        if (start < end)
        {
            res[i] = start;// Guardamos el número en el arreglo.
            start++;// Avanzamos al siguiente número.
            i++;// Pasamos al siguiente espacio en el arreglo.
        }
        else
        {
        res[i] = start;// Guardamos el número en el arreglo.
        start--;// Retrocedemos al siguiente número.
        i++;// Pasamos al siguiente espacio en el arreglo.
        }
    }
    return (res);
}
//Esta función crea un arreglo de números enteros que empieza desde un número (start) y termina en (end).
//Si start es más pequeño que end, el arreglo contará hacia arriba (como 1, 2, 3). 
//Si start es más grande, contará hacia abajo (como 3, 2, 1).
//COMPROBADO