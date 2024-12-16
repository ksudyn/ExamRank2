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

