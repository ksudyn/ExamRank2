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

int     *ft_range(int start, int end)
{
    int *res;
    int i;
    int len;
    i = 0;
    len = end - start;
    if (len < 0)
        len = -len;
    res = malloc(sizeof(*res) * (len +1));
    if (!res)
        return (0);
    while (i < len + 1)
    {
        if (start < end)
        {
            res[i] = start;
            i++;
            start++;
        }
        else
        {
            res[i] = start;
            i++;
            start--;
        }
    }
return (res);
}
//Esta función crea un arreglo de números enteros que empieza desde un número (start) y termina en (end).
//Si start es más pequeño que end, el arreglo contará hacia arriba (como 1, 2, 3). 
//Si start es más grande, contará hacia abajo (como 3, 2, 1).
//COMPROBADO