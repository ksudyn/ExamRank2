/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:16:41 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:16:43 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    if(!begin_list || !*begin_list)
    {
        return ;
    }

    t_list *nodo = *begin_list;

    if(cmp(nodo->data, data_ref) == 0)
    {
		*begin_list = nodo->next;
		free(nodo);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	else
	{
		ft_list_remove_if(&nodo->next, data_ref, cmp);
	}
}
//Escribe una función llamada ft_list_remove_if
//que elimine de la lista pasada cualquier elemento cuyo dato sea "igual" al dato de referencia.
//La función se declarará de la siguiente manera:
//void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());
//cmp toma dos punteros void* y devuelve 0 cuando ambos parámetros son iguales.
//el typedef te lo dan