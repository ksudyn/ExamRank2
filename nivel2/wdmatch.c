/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:07:22 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:07:24 by ksudyn           ###   ########.fr       */
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

    while (argv[2][j])
    {
        if (argv[1][i] == argv[2][j])
        {
                i++;
        }
        j++;
    }
    if (argv[1][i] == '\0')
    {
        i = 0;
        while (argv[1][i])
        {
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);// Siempre imprimimos un salto de línea
    return (0);
}
//Escribe un programa que tome dos cadenas de texto y
//verifique si es posible escribir la primera cadena utilizando los caracteres de la segunda,
// Recorremos la segunda cadena buscando los caracteres de la primera en el primer if del while
// Si hemos encontrado todos los caracteres de la primera cadena reseteamos su contador a 0 y la escribimos
//luego se escribe un salto de linea, si no se puede hacer la condicion muestra un salto de línea (\n).