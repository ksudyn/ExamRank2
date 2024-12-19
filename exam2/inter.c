/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:03:50 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:03:52 by ksudyn           ###   ########.fr       */
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
    unsigned char seen[256] ={0};

    while(argv[1][i])
    {
        while(argv[2][j])
        {
            if(argv[1][i] == argv[2][j])
            {
               if (!seen[(unsigned char)argv[1][i]])  // Si el carácter no ha sido impreso
               {
                write(1, &argv[1][i], 1);  // Imprime el carácter
                seen[(unsigned char)argv[1][i]] = 1;  // Marca el carácter como impreso
                }
                break;
            }
            j++;
        }
        i++;
    }
    write(1, "\n", 1);
    reurn (0);
}
//se compara si dos cadenas tienen los mismos caracteres en el orden de la primera cadena
//cuando dos caracteres coinciden se comprueba si ya se ha escrito antes usando seen.
//unsigned char seen es un arreglo de 256 elementos, donde cada elemento es de tipo unsigned char
//(un tipo de datos que puede almacenar valores entre 0 y 255).
//guarda la informacion de los caracteres ya escritos que estan entre esos 256 para evitar duplicados
//El valor 256 se refiere a la cantidad de posibles valores de un carácter ASCII