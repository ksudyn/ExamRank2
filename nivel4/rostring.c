/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksudyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 14:18:42 by ksudyn            #+#    #+#             */
/*   Updated: 2024/12/13 14:18:45 by ksudyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void    word(char *str, int start, int end)
{
    while(start < end)
    {
        write(1, &str[start], 1);
        start++;
    }
}

int main(int argc, char **argv)
{
    if(argc == 1)
    {
        write(1, "\n", 1);
        return (0);
    }
// en este caso si es mas de un argumento solo utiliza el primero
    if(argc > 1)
    {
    char *str = argv[1];// de este modo se trabaja mejor y nos aseguramos de utilizar solo ese argumento
    int i = 0;
    int startword = 0;//indice del principio de la primera palbra
    int endword = 0;// indice del final de la priemra palabra
    int oneword = 0;//minimo de palabras escritas a parte de las de starwordy endword

    while(str[i] == ' ' || str[i] == '\t')
    {
        i++;
    }
    startword = i;
    while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')//fijarse bien en cuando se utiliza && y ||
    {
        i++;
    }
    endword = i;
    while(str[i] == ' ' || str[i] == '\t')
    {
        i++;
    }
    while(str[i])
    {
        if(str[i] == ' ' || str[i] == '\t')
        {
            while(str[i] == ' ' || str[i] == '\t')
            {
                i++; 
            }
            if (str[i])
            write(1, " ", 1);
        }
        else
        {
            write(1, &str[i], 1);
            oneword = 1;
            i++;
        }
    }

    if(startword < endword)
    {
        if(oneword > 0)// si se escribe ya una palabra hace salto de linea antes de starword
        {
            write(1, " ", 1);
        }//si no solo se escribe la palabra tal cual
        word(str, startword, endword);
    }
    
    write(1, "\n", 1);
    return (0);
    }
}
