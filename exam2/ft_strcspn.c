/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:23:55 by ksudyn            #+#    #+#             */
/*   Updated: 2024/11/28 17:23:57 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
    int     i = 0;

    while (s[i] != '\0')
    {
	int j = 0;
        while (reject[j] != '\0')
        {
            if(s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}
