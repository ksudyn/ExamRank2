/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 18:50:56 by ksudyn            #+#    #+#             */
/*   Updated: 2024/11/18 18:51:15 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write (1, "\n", 1);
        return (0);
    }

    int i = 0;

    while(argv[1][i] != '\0')
    {
        if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
        {
            write(1, "_", 1);
            argv[1][i] = argv [1][i] + 32;
            write (1, &argv[1][i], 1);
        }
        else
        {
            write (1, &argv[1][i], 1);
        }
        i++;
    }
    write (1, "\n", 1);
    return (0);
}
//Escribe un programa que tome una sola cadena en formato lowerCamelCase
//y la convierta en una cadena en formato snake_case.
//Una cadena en formato lowerCamelCase es una cadena donde cada palabra comienza con una letra mayúscula,
//excepto la primera.
//Una cadena en formato snake_case es una cadena donde cada palabra está en minúsculas,
//separada por un guion bajo "_"