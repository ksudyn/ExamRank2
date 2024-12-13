/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:15:36 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:15:38 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include<stdlib.h>
#include<stdio.h>

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }

    int i = 2;
    int number = atoi(argv[1]);

    while (number >= i)
    {
        if(number % i == 0)
        {
            printf("%d", i);

            if(number == i)
            {
                break;
            }
            printf("*");
            number = number / i;
            i = 2;
        }
        i++;
    }
    write(1, "\n", 1);
    return (0);
}