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
//es contarrio que el camel_to_snake, donde desaparece '_' 
//y convertimos en mayuscula la primera letar de la palbra qie va despues de '_'
//dentro del while recorremos el primer argumento y si encontramaos'_', lo saltamos con un 'i++'
//despues de eso empieza la palabra y esa letra se hace mayuscula restandole '32' por el codigo 'ASCCI'
// se escribe el caracter y se pasa al siguiente hasta que 'i' llegue a '\0'
//COMPROBADO