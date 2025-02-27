/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:22:14 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:22:15 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_rrange(int start, int end)
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
        if (end < start)
        {
            res[i] = end;
            i++;
            end++;
        }
        else
        {
            res[i] = end;
            i++;
            end--;
        }
    }
return (res);
}
//Debe asignar memoria (usando malloc()) para un arreglo de enteros,
//llenarlo con valores consecutivos que comienzan en end y terminan en start
//(¡Incluyendo start y end!), y luego devolver un puntero al primer valor del arreglo
//Calculamos el tamaño del arreglo que necesitamos con abs dentro de len
//Reservamos memoria para guardar todos los números con malloc
//Comenzamos con end porque queremos llenar el arreglo desde end hacia start.
//Si end es menor que start, sumamos 1 para contar hacia arriba.
//Si end es mayor que start, restamos 1 para contar hacia abajo.
//Devuelve el arreglo:
//Después de llenar todas las posiciones, devolvemos el puntero al arreglo.
//COMPROBADO