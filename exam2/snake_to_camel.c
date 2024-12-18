/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:06:14 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:06:16 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        write(1, "\n", 1);
        return(0);
    }
    
    int i = 0;

    while(argv[1][i])
    {
        if(argv[1][i] == '_')
        {
            i++;
            argv[1][i] = argv[1][i] - 32;
        }
        write(1, &argv[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return(0);
}