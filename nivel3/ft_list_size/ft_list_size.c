/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:25:53 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:25:55 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int count = 0;
	while (begin_list)
	{
		count++;
		begin_list = begin_list->next;
	}
	return count;
}
// es un strlen de listas
//en el buce while al comprobar si existe la lista ya dice que al menos a una
//por eso se suma count y luego se pasa al siguiente nodo
//esto es como un i++;
