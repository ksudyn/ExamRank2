/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:49:48 by ksudyn            #+#    #+#             */
/*   Updated: 2024/11/18 15:49:51 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
    if(argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }

    int i = 0;
    while (argv[1][i] != '\0')
    {
        if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
        {
            argv[1][i]= ('a' + 'z') - argv[1][i];
            write(1, &argv[1][i], 1);
        }
        else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
        {
           argv[1][i]= ('A' + 'Z') - argv[1][i];
           write(1, &argv[1][i], 1); 
        }
        else
        {
        write(1, &argv[1][i], 1);
        }
        i++;
    }
    write(1,"\n", 1);
    return (0);
}