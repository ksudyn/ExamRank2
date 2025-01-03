/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:21:04 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:21:06 by ksudyn           ###   ########.fr       */
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
            write(1, " ", 1);
            space = 0;
            write(1, &argv[1][i], 1);
        }
        i++;
    }
    write(1, "\n", 1);
    return (0);
}
//esta funcion escribe una cadena con exactamente un espacio entre las palabras
// un contador de esapcios y un interador
//si hay un espacio al principio los salto
//cunado encuentro algo otro caracter entra en otro bucle
//desde alli si encuentra espacios "space" es = 1"
//si hay otro carater comprueba si "space" es = 1 para escribir un ' '
//si no lo es no lo escribe y luego escribe el caracter corresspondiente
//avanza en 1 y al final se escribe "\n"
//COMPROBADO
//este tambien sirve
#include <unistd.h>
void    ft_epur_str(char *str)
{
    int i;
    i = 0;
    while (str[i] == ' ' || str[i] == '\t')
            i++;
    while (str[i])
    {
        if (str[i] > 32 && str[i] < 126)
            write(1, &str[i], 1);
        else if (str[i] == ' ' && (str[i + 1] > 32 && str[i + 1] < 126))
            write(1, " ", 1);
        i++;
    }
}
int main(int argc, char **argv)
{
    if (argc == 2)
        ft_epur_str(argv[1]);
    write(1, "\n", 1);
}