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
    int swapped;

    while (i < size - 1)
    {
        swapped = 0;
        unsigned int j = 0;
        
        while (j < size - 1 - i)
        {
            if (tab[j] > tab[j + 1])
            {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
                swapped = 1;
            }
            j++;
        }

        if (!swapped)
            break;

        i++;
    }
}
//tab: es el arreglo que estamos ordenando. Por ejemplo [5, 2, 8, 1, 4].
//size: es el tamaño del arreglo, en este caso, 5 porque hay 5 elementos en el arreglo
// j es la posicion de los elementos del arreglo
//swapped es el numero de cmabios realizados, si no se ha hecho cambios esta todo ordenado
//i indica cuántas veces hemos recorrido el arreglo