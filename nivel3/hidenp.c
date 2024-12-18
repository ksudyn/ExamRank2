/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:22:29 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:22:30 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

int main(int argc, char **argv)
{
    if(argc != 3)
    {
        write(1, "\n", 1);
        return (0);
    }

    int i = 0;
    int j = 0;

    while(argv[1][i] && argv[2][j])
    {
        if(argv[1][i] == argv[2][j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    if (argv[1][i] == '\0')
    {
        write(1, "1", 1);
    }
    else 
    {
        write(1, "0", 1);
    }
    write(1, "\n", 1);
    return (0);
}
//El programa recorre argv[2] buscando los caracteres de argv[1] en orden.
//si son iguales se avanza en argv[1] con la i, si no se avanza en argv[2] con j
//Si todos los caracteres de argv[1] se encuentran en argv[2] y se llega al NULL, imprime 1.
//Si no, imprime 0.
