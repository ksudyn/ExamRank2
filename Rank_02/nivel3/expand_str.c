/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:21:21 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:21:22 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
      write(1, "\n", 1);
    return (0);  
    }
    int i = 0;
    int space = 0;

    while (argv[1][i] == ' ' || argv[1][i] == '\t')
    i++;
    
    while (argv[1][i])
    {
        if (argv[1][i] == ' ' || argv[1][i] == '\t')
        space = 1;
        if (!(argv[1][i] == ' ' || argv[1][i] == '\t'))
        {
            if (space)
            write(1, "   ", 3);
            space = 0;
            write(1, &argv[1][i], 1);
        }
        i++;
    }
    write(1, "\n", 1);
    return (0);
}
//esta funcion escribe una cadena con exactamente tres espacio entre las palabras
// un contador de esapcios y un interador
//si hay un espacio al principio los salto
//cunado encuentro algo otro caracter entra en otro bucle
//desde alli si encuentra espacios "space" es = 1"
//si hay otro carater comprueba si "space" es = 1 para escribir un '   '
//si no lo es no lo escribe y luego escribe el caracter corresspondiente
//avanza en 1 y al final se escribe "\n"
//COMPROBADO
