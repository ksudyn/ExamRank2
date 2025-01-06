/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:16:18 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:16:20 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list
{
    struct s_list *next;
    void *data;
} t_list;

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    if (!begin_list || !f)
    {
        return;
    }
    while (begin_list)
    {
        f( begin_list->data);
        begin_list = begin_list->next;
    }
}
//Escribe una función que reciba una lista y un puntero a función,
//y aplique esta función a cada elemento de la lista.
//Debe ser declarada de la siguiente manera:
//void    ft_list_foreach(t_list *begin_list, void (*f)(void *));
//La función apuntada por f será utilizada de la siguiente manera:
//(*f)(list_ptr->data) 
//el typedef struct te lo entregan
