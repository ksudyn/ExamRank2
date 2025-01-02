/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:24:06 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:24:10 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void    read_str(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        i++;
    }
    i = 0;
    while(str[i])
    {
        if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\0'))
            str[i] = str[i] - 32;
        write(1, &str[i], 1);
        i++;
    }
}

int main (int argc, char **argv)
{
    if (argc == 1)
    {
        write(1, "\n", 1);
    }
    else
    {
        int i = 1;
        while (i < argc)
        {
            read_str(argv[i]);
            write(1, "\n", 1);
            i++;
        }
        
    }
    return (0);
}
//recibe minimo un argumento y cada argumento lo escribe en pantalla
//todas las letras tienen que ser minusculas salvo la primera de la palbra,
//lo que se comprueba en el segundo while/
//y el final de cada argumento se escribe un salto de linea
// se pone while (i < argc) en lugra de while (i <= argc)
//Esto asegura que i recorra desde el primer argumento (argv[1]) hasta el último (argv[argc - 1]),
//evitando intentar acceder a argv[argc], porque argv[argc] siempre es NULL
//porque si hay 3 argc incluyendo el nombre del programa, argv empieza en 0, no en 1.
//COMPROBADO