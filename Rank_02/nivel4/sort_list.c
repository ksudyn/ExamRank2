/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:19:19 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:19:22 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct s_list
{
	int     cont;
	struct s_list  *next;// Usa 'struct s_list' en lugar de 't_list'.
}           t_list;

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int temp;//es una variable temporal donde guardaremos un número para intercambiar posiciones.
    t_list *start;

    start = lst;//guarda el inicio de la lista (porque necesitamos volver al principio en algunos momentos)
    while(lst != NULL && lst->next != NULL)
    {
        if ((*cmp)(lst->cont, lst->next->cont) == 0)
        {
            temp = lst->cont;//Guardamos el número actual en la variable temp
            lst->cont = lst->next->cont;//Ponemos el número del siguiente nodo en el nodo actual
            lst->next->cont = temp;//Luego ponemos el valor guardado en temp en el siguiente nodo
            lst = start;//Después de intercambiar dos números, regresamos al inicio de la lista
            //(start) para revisar todo desde el principio
        }
        else
        {
            lst = lst->next;// Si los números están en el orden correcto, avanzamos al siguiente nodo
        }
    }
    return(start);//Esto significa que devolvemos el puntero al primer nodo de la lista ordenada
    //porque hay que devolver un puntero al primer elemento de la lista ordenada
}
//COMPROBADO