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
        return;
    }

    t_list *cont = *begin_list;

    if(cmp(cont->data, data_ref) == 0)
    {
		*begin_list = cont->next;
		free(cont);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	else
	{
		ft_list_remove_if(&cont->next, data_ref, cmp);
	}
}