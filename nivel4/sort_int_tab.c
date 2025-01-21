/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:19:03 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:19:04 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i = 0;
    int temp;

    while(i < (size - 1))
    {
        if(tab[i] > tab[i + 1])
        {
            temp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = temp;
            i = 0;
        }
        else
        {
            i++;
        }
    }
}
//tab: es el arreglo que estamos ordenando. Por ejemplo [5, 2, 8, 1, 4].
//size: es el tamaño del arreglo, en este caso, 5 porque hay 5 elementos en el arreglo
// j es la posicion de los elementos del arreglo
//swapped es el numero de cambios realizados, si no se ha hecho cambios esta todo ordenado
//i indica cuántas veces hemos recorrido el arreglo
//em el while se entra solo si i < size -1 porque i empieza desde 0 size desde 1
