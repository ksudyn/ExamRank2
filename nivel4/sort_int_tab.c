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
    int cambios;

    while (i < size - 1)
    {
        cambios = 0;
        unsigned int j = 0;
        
        while (j < size - i - 1)
        {
            if (tab[j] > tab[j + 1])
            {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
                cambios = 1;
            }
            j++;
        }

        if (!cambios)
            break;

        i++;
    }
}
//tab: es el arreglo que estamos ordenando. Por ejemplo [5, 2, 8, 1, 4].
//size: es el tamaño del arreglo, en este caso, 5 porque hay 5 elementos en el arreglo
// j es la posicion de los elementos del arreglo
//swapped es el numero de cambios realizados, si no se ha hecho cambios esta todo ordenado
//i indica cuántas veces hemos recorrido el arreglo
//em el while se entra solo si i < size -1 porque i empieza desde 0 size desde 1
